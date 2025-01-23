#include <iostream>
using namespace std;

// Base class: GeoShape
class GeoShape {
protected:
    float dim1;
    float dim2;

public:
    static int count_constructors;
    static int count_destructors;

    GeoShape() {
        dim1 = dim2 = 0;
        count_constructors++;
        cout << "GeoShape constructor called." << endl;
    }

    GeoShape(float x) {
        dim1 = dim2 = x;
        count_constructors++;
        cout << "GeoShape constructor called with " << x << " parameter." << endl;
    }

    GeoShape(float x, float y) {
        dim1 = x;
        dim2 = y;
        count_constructors++;
        cout << "GeoShape constructor called with " << x << " and " << y << " parameters." << endl;
    }

    void setDim1(float x) { dim1 = x; }
    void setDim2(float x) { dim2 = x; }
    float getDim1() { return dim1; }
    float getDim2() { return dim2; }

    virtual float calculateArea() { return 0; } // Placeholder

    ~GeoShape() {
        count_destructors++;
        cout << "GeoShape destructor called." << endl;
    }
};
int GeoShape::count_constructors = 0;
int GeoShape::count_destructors = 0;

// Public Inheritance Example: Triangle
class Triangle : public GeoShape {
public:
    Triangle() : GeoShape() {
        cout << "Triangle constructor called." << endl;
        count_constructors++;
    }
    Triangle(float b, float h) : GeoShape(b, h) {
        cout << "Triangle constructor called with base " << dim1 << " and height " << dim2 << "." << endl;
        count_constructors++;
    }

    float calculateArea() override {
        return 0.5 * dim1 * dim2;
    }
    ~Triangle() {
        cout << "Triangle destructor called." << endl;
        count_destructors++;
    }
};

// Public Inheritance Example: Rectangle
class Rect : public GeoShape {
public:
    Rect() : GeoShape() {
        cout << "Rectangle constructor called." << endl;
        count_constructors++;
    }
    Rect(float x, float y) : GeoShape(x, y) {
        cout << "Rectangle constructor called with dimensions " << dim1 << " and " << dim2 << "." << endl;
        count_constructors++;
    }

    float calculateArea() override {
        return dim1 * dim2;
    }
    ~Rect() {
        cout << "Rectangle destructor called." << endl;
        count_destructors++;
    }
};

// Square with Public Inheritance (Violates constraints)
class Square_Public : public Rect {
public:
    Square_Public() : Rect() {
        cout << "Square_Public constructor called." << endl;
        count_constructors++;
    }
    Square_Public(float side) : Rect(side, side) {}

    void setSquareDim(float x) {
        setDim1(x);
        setDim2(x);
    }

    float getSquareDim() { return getDim1(); }

    float calculateArea() override { return dim1 * dim2; }

    ~Square_Public() {
        cout << "Square_Public destructor called." << endl;
        count_destructors++;
    }
};

// Square with Protected Inheritance (Protects constraints)
class Square_Protected : protected Rect {
public:
    Square_Protected() : Rect() {
        cout << "Square_Protected constructor called." << endl;
        count_constructors++;
    }
    Square_Protected(float side) : Rect(side, side) {}

    void setSquareDim(float x) { dim1 = dim2 = x; }
    float getSquareDim() { return dim1; }
    float calculateArea() { return dim1 * dim2; }

    ~Square_Protected() {
        cout << "Square_Protected destructor called." << endl;
        count_destructors++;
    }
};

// Circle Example
class Circle : protected GeoShape {
public:
    Circle() : GeoShape() {
        cout << "Circle constructor called." << endl;
        count_constructors++;
    }
    Circle(float radius) : GeoShape(radius, radius) {
        cout << "Circle constructor called with radius " << dim1 << "." << endl;
        count_constructors++;
    }

    void setRadius(float r) { dim1 = dim2 = r; }
    float getRadius() { return dim1; }
    float calculateArea() { return 3.14 * dim1 * dim1; }

    ~Circle() {
        cout << "Circle destructor called." << endl;
        count_destructors++;
    }
};

// Base1 and Base2 for Multiple Inheritance Example
class Base1 {
public:
    int a;

    Base1(int x) : a(x) {
        cout << "Base1 constructor called with " << x << "." << endl;
        GeoShape::count_constructors++;
    }
    ~Base1() {
        cout << "Base1 destructor called." << endl;
        GeoShape::count_destructors++;
    }
};

class Base2 {
public:
    int a;

    Base2(int y) : a(y) {
        cout << "Base2 constructor called with " << y << "." << endl;
        GeoShape::count_constructors++;
    }
    ~Base2() {
        cout << "Base2 destructor called." << endl;
        GeoShape::count_destructors++;
    }
};

class Derived : virtual public Base1, virtual public Base2 {
public:
    int c;

    Derived(int x, int y, int z) : Base1(x), Base2(y) {
        c = z;
        cout << "Derived constructor called with " << x << ", " << y << ", and " << z << "." << endl;
        GeoShape::count_constructors++;
    }

    int product() { return Base1::a * Base2::a * c; }

    ~Derived() {
        cout << "Derived destructor called." << endl;
        GeoShape::count_destructors++;
    }
};

int main() {
    cout << "----- Public Inheritance Test: Violating Square Constraints -----" << endl;
    Square_Public squarePublic(5);
    cout << "Initial Area: " << squarePublic.calculateArea() << endl;
    squarePublic.setDim1(3); // Violates square constraint
    cout << "Area After Violating Constraint: " << squarePublic.calculateArea() << endl;

    cout << "\n----- Protected Inheritance Test: Protecting Square Constraints -----" << endl;
    Square_Protected squareProtected(5);
    cout << "Initial Area: " << squareProtected.calculateArea() << endl;
    squareProtected.setSquareDim(4);
    cout << "Area After Setting Valid Square Dim: " << squareProtected.calculateArea() << endl;

    cout << "\n----- Circle Test -----" << endl;
    Circle circle(5);
    cout << "Circle Area: " << circle.calculateArea() << endl;
    circle.setRadius(3);
    cout << "Circle Area After Changing Radius: " << circle.calculateArea() << endl;

    cout << "\n----- Multiple Inheritance Test -----" << endl;
    Derived d(2, 3, 4);
    cout << "Product of Base1, Base2, and Derived: " << d.product() << endl;

    cout << "\n--------------------------------" << endl;
    cout << "       Constructors and Destructors       " << endl;
    cout << "Number of constructors called: " << GeoShape::count_constructors << endl;
    cout << "Number of destructors called: " << GeoShape::count_destructors << endl;
    cout << "--------------------------------" << endl;

    return 0;
}
