#include <iostream>
#include <cmath>
using namespace std;

class Complex
{
    float real, img;

public:
    Complex()
    {
        cout << "\nThis is constructor " << endl;
    }

    Complex(float r, float i)
    {
        real = r;
        img = i;
        cout << "\nThis is constructor " << endl;
    }

    // Member function declarations
    Complex add(const Complex &c);
    Complex sub(const Complex &c);
    void setReal(float r);
    void setImg(float i);
    void setComplex(float r, float i);
    float getReal();
    float getImg();
    void print();

    ~Complex()
    {
        cout << "\nThis is destructor " << endl;
    }
};

// Definitions for member functions
void Complex::setReal(float r)
{
    real = r;
}

void Complex::setImg(float i)
{
    img = i;
}

//new setter
void Complex::setComplex(float r, float i)
{
    real = r;
    img = i;
}

float Complex::getReal()
{
    return real;
}

float Complex::getImg()
{
    return img;
}

void Complex::print()
{
    if (img >= 0)
        cout << real << " + " << img << "i\n";
    else
        cout << real << " - " << fabs(img) << "i\n";
}

Complex Complex::add(const Complex &c)
{
    Complex temp(real + c.real, img + c.img);
    return temp; // Destructor will be called for temp after the function returns.
}

Complex Complex::sub(const Complex &c)
{
    Complex temp(real - c.real, img - c.img);
    return temp; // Destructor will be called for temp after the function returns.
}

int main()
{
    Complex *myComp1 = new Complex;
    Complex *myComp2 = new Complex;
    Complex *resultComp = new Complex;

    myComp1->setComplex(3, 4);
    myComp2->setComplex(1, 2);

    cout << "Complex number 1: ";
    myComp1->print();

    cout << "Complex number 2: ";
    myComp2->print();

    // Add the complex numbers
    {
        Complex temp = myComp1->add(*myComp2); // temp is created and destroyed in this block
        *resultComp = temp;
    }
    cout << "Sum: ";
    resultComp->print();

    // Subtract the complex numbers
    {
        Complex temp = myComp1->sub(*myComp2); // temp is created and destroyed in this block
        *resultComp = temp;
    }
    cout << "Difference: ";
    resultComp->print();

    // Free the dynamically allocated memory
    delete myComp1;
    delete myComp2;
    delete resultComp;

    system("pause>0");
    return 0;
}
