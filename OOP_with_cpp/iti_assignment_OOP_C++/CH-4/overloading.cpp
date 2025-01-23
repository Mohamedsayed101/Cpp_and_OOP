// made by Moahamed Sayed Oamr El-Sayed
#include <iostream>
#include <cmath>
using namespace std;

class Complex
{
private:
    double real, imag;

public:
    // Constructor (default and parameterized)
    Complex(double real=0.0, double imag=0.0) : real(real), imag(imag) {}

    // Destructor
    ~Complex() {}

    // Overloading operator
    Complex operator +(const Complex& s) const
    {
        Complex n;
        n.real = real + s.real;
        n.imag = imag + s.imag;
        return n;
    }
    Complex operator -(const Complex& s) const
    {
        Complex n;
        n.real = real - s.real;
        n.imag = imag - s.imag;
        return n;
    }

    int operator ==(const Complex& s) const
    {
        return (this->real == s.real && this->imag == s.imag);
    }
    friend Complex operator+(double num, const Complex& s); 
    friend Complex operator+(const Complex& s, double num);
    friend Complex operator-(double num, const Complex& s);
    friend Complex operator-(const Complex& s, double num);

    //+= operator
    Complex& operator +=(const Complex& s)
    {
        this->real += s.real;
        this->imag += s.imag;
        return *this;
    }
    // -= operator
    Complex& operator -=(const Complex& s){
        this->real -= s.real;
        this->imag -= s.imag;
        return *this;
    }
    // --complex operator
    Complex operator--(){
        --real;
        return *this;
    }
    // complex-- operator
    Complex operator--(int){
        real--;
        return *this;
    }
    // ++complex operator
    Complex operator++(){
        ++real;
        return *this;
    }
    // complex++ operator
    Complex operator++(int){
        real++;
        return *this;
    }

    //(int)complex operator
    operator int() const{
        return static_cast<int>(real);
    }
    //display function 
    void display() const{
        cout << real << (imag >= 0? " + " : " - ") << abs(imag) << "i" << endl;
        cout<<"---------------------------"<<endl;
    }
};
    //num + complex operator
    Complex operator+(double num, const Complex& s)
    {
        Complex n;
        n.real = num + s.real;
        n.imag = s.imag;
        return n;
    }
    // complex + num  operator
    Complex operator+(const Complex& s, double num)
    {
        Complex n;
        n.real = s.real + num;
        n.imag = s.imag;
        return n;
    }
    // num- complex  
    Complex operator-(double num, const Complex& s){
        Complex n;
        n.real = num - s.real;
        n.imag = -s.imag;
        return n;
    }
    //  complex-num
    Complex operator-(const Complex& s, double num){
        Complex n;
        n.real = s.real - num;
        n.imag = s.imag;
        return n;
    }

    
int main()
{
    Complex c1(1.1,2),c2(2,4); 
    c1.display(); // 1 + 2i
    c2.display(); // 2 + 4i
    Complex c3 = c1 + c2;
    c3.display(); // 3 + 6i
    c3 = c1 - c2;
    c3.display(); // -1 - 2i
    c3 = 5 + c1;
    c3.display(); // 
    c3 = c1 - 5;
    c3.display();
    c3 = 5 - c1;
    c3.display();
    c3 = c1 + 5;
    c3.display();
    c3 = ++c1;
    c3.display();
    c3 = c1++;
    c3.display();
    c3 = --c1;
    c3.display();
    c3 = c1--;
    c3.display();
    cout<<"result == is "<<(c1==c2)<<endl;
    // int result =(int)c1;
    cout<<"Real int is "<< (int) c1<<endl;
    c3.display();
    return 0;
}
