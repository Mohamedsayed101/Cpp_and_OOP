#include <iostream>
using namespace std;

class Base {
private:
    int a, b;

public:
    Base() { a = b = 0; }                    // Default constructor
    Base(int n) { a = b = n; }               // Constructor with one parameter
    Base(int x, int y) { a = x; b = y; }     // Constructor with two parameters

    void setA(int x) { a = x; }              // Setter for 'a'
    void setB(int y) { b = y; }              // Setter for 'b'

    int getA() { return a; }                 // Getter for 'a'
    int getB() { return b; }                 // Getter for 'b'

    int productAB() { return a * b; }        // Returns product of a and b
};

class Derived : public Base {
private:
    int c;

public:
    Derived() : Base() { c = 0; }                // Default constructor
    Derived(int n) : Base(n) { c = n; }          // Constructor with one parameter
    Derived(int x, int y, int z) : Base(x, y) {  // Constructor with three parameters
        c = z;
    }

    void setC(int z) { c = z; }                  // Setter for 'c'
    int getC() { return c; }                     // Getter for 'c'

    int productABC() {                           // Product of a, b, and c
        return getA() * getB() * c;              // Use getters to access Base class members
    }
};

class SecondDerived : public Derived {
private:
    int d;

public:
    SecondDerived() : Derived() { d = 0; }                  // Default constructor
    SecondDerived(int n) : Derived(n) { d = n; }            // Constructor with one parameter
    SecondDerived(int x, int y, int m, int z) : Derived(x, y, m) { 
        d = z;
    }

    void setD(int z) { d = z; }                             // Setter for 'd'
    int getD() { return d; }                                // Getter for 'd'

    int product() {                                         // Overridden product method
        return getA() * getB() * getC() * d;                // Use getters to access members
    }
};

int main() {
    // Test cases for Base class
    cout << "Testing Base Class:" << endl;
    Base base1; // Default constructor
    Base base2(5); // One parameter
    Base base3(2, 3); // Two parameters
    cout << "ProductAB (base1): " << base1.productAB() << endl;
    cout << "ProductAB (base2): " << base2.productAB() << endl;
    cout << "ProductAB (base3): " << base3.productAB() << endl;

    // Test cases for Derived class
    cout << "\nTesting Derived Class:" << endl;
    Derived derived1; // Default constructor
    Derived derived2(4); // One parameter
    Derived derived3(2, 3, 5); // Three parameters
    cout << "ProductABC (derived1): " << derived1.productABC() << endl;
    cout << "ProductABC (derived2): " << derived2.productABC() << endl;
    cout << "ProductABC (derived3): " << derived3.productABC() << endl;

    // Test cases for SecondDerived class
    cout << "\nTesting SecondDerived Class:" << endl;
    SecondDerived sd1; // Default constructor
    SecondDerived sd2(4); // One parameter
    SecondDerived sd3(2, 3, 5, 6); // Four parameters
    cout << "Product (sd1): " << sd1.product() << endl;
    cout << "Product (sd2): " << sd2.product() << endl;
    cout << "Product (sd3): " << sd3.product() << endl;

    // Modifying values
    cout << "\nModifying values in SecondDerived:" << endl;
    sd3.setA(10);
    sd3.setB(2);
    sd3.setC(3);
    sd3.setD(4);
    cout << "Updated Product (sd3): " << sd3.product() << endl;

    return 0;
}