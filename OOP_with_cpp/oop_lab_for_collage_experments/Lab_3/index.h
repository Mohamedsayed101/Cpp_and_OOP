#include <iostream>
#include <string>
using namespace std;
/*
Problem 1

Description: You need to create a program to
represent a "Car" which stores information such as its
make, model, and year. The make and model should
only be accessible from within the class, while year can
be accessed publicly.
*/
// class Car
// {
// private:
//     string make;
//     string model;
// public:
//     int year;
//     Car(string make, string model, int year);
//     Car();
//     void setMake(string make);
//     void setModel(string model);
//     string getMake() const;
//     string getModel() const;
//     void display();
//     ~Car();
// };
//============================================================================

/*
Problem 2

Description: Create a program to represent a "Book"
with attributes such as the book's title and author,
where both attributes are private. Allow the user to
set these values using public methods and retrieve
them using public methods.
*/
// class Book
// {
// private:
//     string title,author;
// public:
//     Book();
//     Book(string title,string author);
//     void setTitle(string title);
//     void setAuthor(string author);
//     string getTitle() const;
//     string getAuthor() const;
//     void display() const;
//     ~Book();

// };
//============================================================================

/*
Problem 3

Description: You are tasked with creating a
"Rectangle" class that represents the dimensions of a
rectangle (length and width). Both attributes should be
private, and the program should have methods to
calculate the area and perimeter of the rectangle.
*/

// class Rectangle
// {
// private:
//     double length, width;
// public:
//     Rectangle();
//     Rectangle(double length, double width);
//     double getArea() const;
//     double getPerimeter() const;
//     void setLength(double length);
//     void setWidth(double width);
//     void display() const; 
//     ~Rectangle();
// };

/*
Description: You need to create a program to manage
an employee's salary in Employe class , which stores
information such as name , age, and salary and
calculating both the gross salary and net salary after
applying taxes. The program should also allow for the
option to change the tax rate dynamically
*/
class Employee
{
private:
    string name;
    int age;
    double salary;
    double taxRate;
public:
    Employee(string name,int age,double salary,double taxRate);
    void displaySalayDetails();
    double getGrossSalary(double salary) const;
    double getNetSalary(double salary,double taxRate) const;
    void changeTax(double NewTax);
    ~Employee();
};

