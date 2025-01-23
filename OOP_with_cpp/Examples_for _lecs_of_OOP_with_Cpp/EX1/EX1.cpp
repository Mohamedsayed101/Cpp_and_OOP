/*
Exercise #1

Define a class Person with private member
variables name and age. The class should have
a constructor that takes the name and age as
parameters. Define getters and setters for both
variables. The class has a static member
variable that stores the minimum age of any
Person object defined using this class. Define a
static member function that returns the value of
the minimum age.
*/

#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string name;
    int age;
    static int minAge;

public:
    Person()
    {
        cout << "defalut constructor is called" << endl;
    }
    Person(string name, int age) : name(name), age(age)
    {
        if (age < minAge)
            minAge = age;
        cout << "parameter constructor is called with two parameters " << endl;
    }
    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return name;
    }
    void setAge(int age)
    {
        this->age = age;
        if (age < minAge)
            minAge = age;
    }
    int getAge()
    {
        return age;
    }
    static int getMinAge()
    {
        return minAge;
    }
    void display()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
    ~Person() {}
};

int Person::minAge = 0;
int main()
{
    Person p1("John", 20);
    p1.display();
    Person p2("Alice", 18);
    p2.display();
    cout << "Minimum age: " << Person::getMinAge() << endl;
    return 0;
}