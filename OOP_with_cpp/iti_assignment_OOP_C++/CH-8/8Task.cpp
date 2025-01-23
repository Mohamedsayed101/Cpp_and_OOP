#include <iostream>
#include <string>
using namespace std;

// Abstract Base Class
class GeoShape {
public:
    virtual double calculateArea() = 0; // Pure virtual function
    virtual ~GeoShape() {} // Virtual destructor
};

// Derived Class: Rectangle
class Rectangle : public GeoShape {
private:
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double calculateArea() override {
        return length * width;
    }
};

// Derived Class: Circle
class Circle : public GeoShape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}
    double calculateArea() override {
        return 3.14 * radius * radius;
    }
};

// Derived Class: Triangle
class Triangle : public GeoShape {
private:
    double base, height;

public:
    Triangle(double b, double h) : base(b), height(h) {}
    double calculateArea() override {
        return 0.5 * base * height;
    }
};

// Standalone function to sum areas of three GeoShape objects
double sumOfAreas(GeoShape* g1, GeoShape* g2, GeoShape* g3) {
    return g1->calculateArea() + g2->calculateArea() + g3->calculateArea();
}

// Template Stack Class
template <class T>
class Stack {
private:
    int top;
    int size;
    T* ptr;
    static int counter;

public:
    Stack(int n = 10);
    ~Stack();
    void push(T);
    T pop();
    static int getCounter();
    friend void viewContent(Stack<T> s) {
        for (int i = 0; i < s.top; i++) {
            cout << s.ptr[i] << " ";
        }
    }
};

// Static variable initialization
template <class T>
int Stack<T>::counter = 0;

template <class T>
Stack<T>::Stack(int n) : size(n), top(0) {
    ptr = new T[size];
    counter++;
}

template <class T>
Stack<T>::~Stack() {
    delete[] ptr;
}

template <class T>
void Stack<T>::push(T value) {
    if (top < size) {
        ptr[top++] = value;
    } else {
        cout << "Stack is full!" << endl;
    }
}

template <class T>
T Stack<T>::pop() {
    if (top > 0) {
        return ptr[--top];
    } else {
        cout << "Stack is empty!" << endl;
        return T();
    }
}

template <class T>
int Stack<T>::getCounter() {
    return counter;
}

// Main Function
int main() {
    // GeoShape Example
    Rectangle rect(10, 5);
    Circle circ(7);
    Triangle tri(6, 8);

    cout << "Rectangle Area: " << rect.calculateArea() << endl;
    cout << "Circle Area: " << circ.calculateArea() << endl;
    cout << "Triangle Area: " << tri.calculateArea() << endl;

    cout << "Sum of Areas: " << sumOfAreas(&rect, &circ, &tri) << endl;

    // Stack Example
    Stack<int> s1(5);
    cout << "\nNumber of Integer Stacks is: " << Stack<int>::getCounter() << endl;

    s1.push(10);
    s1.push(20);
    s1.push(30);

    cout << "Popped value: " << s1.pop() << endl;

    Stack<char> s2;
    cout << "Number of Character Stacks is: " << Stack<char>::getCounter() << endl;

    s2.push('a');
    s2.push('b');
    s2.push('c');

    cout << "Content of Character Stack: ";
    viewContent(s2);
    cout << endl;

    return 0;
}