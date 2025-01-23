// made by Moahamed Sayed Oamr El-Sayed
#include <iostream>
#include <cmath>
using namespace std;

class Complex
{
private:
    double *real, *imag;

public:
    // Constructor (default and parameterized)
    Complex(double real = 0.0, double imag = 0.0)
    {
        this->real = new double(real);
        this->imag = new double(imag);
    }

    // Copy Constructor
    // Complex(const Complex &other) {
    //     real = new double(*other.real);
    //     imag = new double(*other.imag);
    // }

    // Destructor
    ~Complex()
    {
        delete real;
        delete imag;
    }

    // Getter functions
    double getReal() const { return *real; }
    double getImag() const { return *imag; }

    // Setter functions
    void setReal(double real) { *this->real = real; }
    void setImag(double imag) { *this->imag = imag; }
    // Setter functions to partical ch2
    void setComplex(double real, double img)
    {
        this->real = new double(real);
        this->imag = new double(img);
    }
    // Operation functions
    Complex Add(const Complex &c) const
    {
        return Complex(*real + *c.real, *imag + *c.imag);
    }

    Complex Subtract(const Complex &c) const
    {
        return Complex(*real - *c.real, *imag - *c.imag);
    }

    // Display function
    void display() const
    {
        cout << *real << (*imag >= 0 ? " + " : " - ") << abs(*imag) << "i" << endl;
    }
};

int main()
{
    Complex myComp1, myComp2;

    cout << "Enter the first complex number (real and imaginary parts): " << endl;
    double real = 0.0, imag = 0.0;
    cin >> real >> imag;
    myComp1.setReal(real);
    myComp1.setImag(imag);

    cout << "Enter the second complex number (real and imaginary parts): " << endl;
    cin >> real >> imag;
    myComp2.setReal(real);
    myComp2.setImag(imag);

    // Addition
    Complex resultComp1 = myComp1.Add(myComp2); // Copy constructor used here
    cout << "Result of addition: ";
    resultComp1.display();

    // Subtraction
    Complex resultComp2 = myComp1.Subtract(myComp2); // Copy constructor used here
    cout << "Result of subtraction: ";
    resultComp2.display();

    return 0;
}
