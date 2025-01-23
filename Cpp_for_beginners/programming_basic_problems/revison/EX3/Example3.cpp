#include <iostream>
#include <string>

using namespace std;
/*
PROBLEM(3)

Write a C++ program to find the number of pairs of integers in a given array of integers whose
sum is equal to a specified number and show pairs also .
*/

int main() // Main function

{

    int array1[] = {1, 5, 7, 5, 8, 9, 11, 12};

    int s1 = sizeof(array1) / sizeof(array1[0]);

    cout << "Original array: ";

    for (int i = 0; i < s1; i++)

        cout << array1[i] << " ";

    cout << endl;

    int i, sum = 0, ctr = 0;

    cout << "Enter sum pairs : ";

    cin >> sum;

    for (int i = 0; i < s1; i++)
    {

        for (int j = i + 1; j < s1; j++)

        {

            if (array1[i] + array1[j] == sum)
            {

                cout << "\n"
                     << "(" << array1[i] << "," << array1[j] << ")";

                ctr++;
            }
        }
    }

    cout << "\nNumber of pairs whose sum equals " << sum << " : ";

    cout << ctr;

    return 0;
}