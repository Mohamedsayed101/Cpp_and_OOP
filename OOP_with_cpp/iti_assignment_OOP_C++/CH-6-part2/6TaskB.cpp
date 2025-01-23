#include <iostream>
using namespace std;

// Base Class
class Shape {
protected:
    int color;
public:
    Shape(int c = 0) : color(c) {}
    virtual void draw() const = 0;
};

// Point Class
class Point {
    int x, y;
public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}
    void display() const { cout << "(" << x << ", " << y << ")"; }
};

// Derived Class: Line
class Line : public Shape {
    Point start, end;
public:
    Line(Point s, Point e, int c = 0) : Shape(c), start(s), end(e) {}
    void draw() const override {
        cout << "Line from "; start.display();
        cout << " to "; end.display();
        cout << " with color " << color << endl;
    }
};

// Derived Class: Rect
class Rect : public Shape {
    Point ul, lr;
public:
    Rect(Point u, Point l, int c = 0) : Shape(c), ul(u), lr(l) {}
    void draw() const override {
        cout << "Rectangle from "; ul.display();
        cout << " to "; lr.display();
        cout << " with color " << color << endl;
    }
};

// Derived Class: Circle
class Circle : public Shape {
    Point center;
    int radius;
public:
    Circle(Point c, int r, int col = 0) : Shape(col), center(c), radius(r) {}
    void draw() const override {
        cout << "Circle at "; center.display();
        cout << " with radius " << radius;
        cout << " and color " << color << endl;
    }
};

// Main Function to Test All Classes
int main() {
    Line l1(Point(10, 10), Point(50, 50), 1);
    Rect r1(Point(20, 20), Point(60, 60), 2);
    Circle c1(Point(30, 30), 15, 3);

    Shape* shapes[] = { &l1, &r1, &c1 }; // Polymorphism

    for (int i = 0; i < 3; i++) {
        shapes[i]->draw();
    }

    return 0;
}