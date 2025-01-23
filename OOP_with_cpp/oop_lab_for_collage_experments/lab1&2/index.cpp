#include<iostream>
using namespace std;
// assignment 1
/*
Defining the Point Structure : A structure Point is defined, which contains two integer members x and y .
A variable p of type Point is created and initialized with x = 10 and y = 20.
Modify x using pointer x = 30; and print x and y
*/
// struct Point {
//     int x, y;
// };
//================================================================
//assignment 2
/*
Ceate add function takes two integer parameters (a and b) and prints their sum .
Inside the main function, a function pointer funcPtr is declared and initialized to point to the add function.
The function pointer funcPtr is used to call the add function indirectly with arguments 5 and 7. When
funcPtr(5, 7) is executed, it invokes the add function with these arguments.
*/
// void add(int a, int b);
//================================================================

//assignment 3
/*
Create Dynamic Memory Allocation array and ask user to enter size of array .
initialize any values in array and display them.
Note: Free dynamically allocated memory
*/
int main()
{//assignment 3
    // int size=0;
    // cout << "Enter size of array: ";
    // cin >> size;
    // int *arr=new int[size];
    // for (size_t i = 0; i < size; i++)
    // {
    //     arr[i] = i + 1;
    // }
    // for (size_t i = 0; i < size; i++)
    // cout << arr[i] << " ";
    // delete[] arr;
    // arr=nullptr;
//=======================================================
    // assigment 1
// Point p ;
// p={10,20};
// Point* ptr = &p;
// ptr ->x = 30;
// cout << "x = " << ptr->x << ", y = " << ptr->y << endl;
//================================================================

// assignment 2

// void (*funcPtr)(int ,int) = add;
//     funcPtr(5, 7);
//================================================================



    return 0;
}


// void add(int a, int b)
// {
//     cout << "Sum of " << a << " and " << b << " is " << a + b << endl;
// }
//================================================================

