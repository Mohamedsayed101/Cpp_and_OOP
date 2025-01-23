#include <iostream>
#include "index.h"
#include <string>
using namespace std;

// assignment 1

// Car::Car(string make, string model, int year):make(make), year(year), model(model)
// {
// }
// Car::Car():make(""), year(0), model("")
// {
// }

// void Car::setMake(string make) 
// {
//     this->make = make;
// }

// void Car::setModel(string model)
// {
//     this->model = model;
// }

// string Car::getMake() const
// {
//     return make;
// }

// string Car::getModel() const
// {
//     return model;
// }

// void Car::display()
// {
//     cout << "Make: " << make <<endl<< " Model: " << model <<endl <<" Year: " << year << endl;
// }

// Car::~Car()
// {
// }
//================================================================

// assignment 2

// Book::Book():title(""),author("")
// {
// }

// Book::Book(string title, string author):title(title),author(author)
// {
// }

// void Book::setTitle(string title)
// {
//     this->title = title;
// }

// void Book::setAuthor(string author)
// {
//     this->author = author;
// }

// string Book::getTitle() const
// {
//     return title;
// }

// string Book::getAuthor() const
// {
//     return author;
// }

// void Book::display() const
// {
//     cout << "Title: " << title << endl<< "Author: " << author << endl;
// }

// Book::~Book()
// {
// }
//================================================================

//assignment 3

// Rectangle::Rectangle():length(0.0),width(0.0)
// {
// }

// Rectangle::Rectangle(double length, double width):length(length),width(width)
// {
// }

// double Rectangle::getArea() const
// {
//     return (width * length);
// }

// double Rectangle::getPerimeter() const
// {
//     return ((length+width)*2);
// }

// void Rectangle::setLength(double length)
// {
//     if(length > 0)
//         this->length = length;
//     else
//         cout << "Length should be a positive number." << endl;
// }

// void Rectangle::setWidth(double width)
// {
//     if(width > 0)
//         this->width = width;
//     else
//         cout << "Width should be a positive number." << endl;
// }

// void Rectangle::display() const
// {
//     cout << "Length: " << length << endl<< "Width: " << width << endl;
//     cout << "Area: " << getArea() << endl;
//     cout << "Perimeter: " << getPerimeter() << endl;
// }

// Rectangle::~Rectangle()
// {
// }
//================================================================

//assignment 4

Employee::Employee(string name, int age, double salary, double taxRate)
{
    this->name = name;
    this->age = age;
    this->salary = salary;
    this->taxRate = taxRate;   
}

void Employee::displaySalayDetails()
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Salary: $" << salary << endl;
    cout << "Tax Rate: " << taxRate << "%" << endl;
    cout << "Tax Amount: $" << salary * taxRate / 100 << endl;
    cout << "Net Salary: $" << salary - (salary * taxRate / 100) << endl;
}

double Employee::getGrossSalary(double salary) const
{
    return salary;
}

double Employee::getNetSalary(double salary, double taxRate) const
{
    return (salary-(salary * (taxRate / 100)));
}

void Employee::changeTax(double NewTax)
{
    taxRate = NewTax;
}

Employee::~Employee()
{
}
