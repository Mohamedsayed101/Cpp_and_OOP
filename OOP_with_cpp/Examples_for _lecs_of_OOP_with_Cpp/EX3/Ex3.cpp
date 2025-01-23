/*
Exercise #3

Declare and implement class Triangle which keeps data about the
lengths of its 3 sides. The class should have 3 constructors; the
default constructor, a constructor that takes 3 float arguments, and
a constructor that takes the lengths in a float array. All data
members should be private. Triangle should have a method float
printAverage() that calculates the average side length.

In main, declare 3 triangles using the 3 constructors.

Display the average side length for each triangle.
*/
#include <iostream>
#include <string>
using namespace std;

class Triangle
{
private:
    float side1, side2, side3;

public:
    Triangle() : side1(0.0), side2(0.0), side3(0.0)
    {
        cout << "Default constructor called" << endl;
    }
    Triangle(float a, float b, float c) : side1(a), side2(b), side3(c)
    {
        cout << "Constructor with 3 arguments called" << endl;
    }
    Triangle(float sides[]) : side1(sides[0]), side2(sides[1]), side3(sides[2])
    {
        cout << "Constructor with array arguments called" << endl;
    }

    float printAverage()
    {
        return (side1 + side2 + side3) / 3.0f;
    }
};
int main()
{
    Triangle t1;
    Triangle t2(3.0, 4.0, 5.0);
    float sides[3] = {4.0, 9.0, 7.0};
    Triangle t3(sides);
    // Triangle t3({4.0,9.0,7.0})
    cout << "Average side length of t1: " << t1.printAverage() << endl;
    cout << "Average side length of t2: " << t2.printAverage() << endl;
    cout << "Average side length of t3: " << t3.printAverage() << endl;
    return 0;
}