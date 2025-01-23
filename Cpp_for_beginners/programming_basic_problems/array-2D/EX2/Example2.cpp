#include <iostream>
#include <string>
/*
2. Write a c++ code of 2D array of integers and its size as arguments and displays the
elements of middle row and the elements of middle column.
     0 1 2
  0  1 2 3
  1  4 5 6
  2  7 8 9
*/
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the 2D array: ";
    cin >> size;

    int arr[size][size];

    cout << "Enter the elements of the 2D array:\n";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> arr[i][j];
        }
    }
    int mid = size / 2;
    for (int i = 0; i < size; i++)
    {
        if (size % 2 == 0)
        {
            cout << "There isn't middle column and row because size of matrix is even." << endl;
            break;
        }
        for (size_t j = 0; j < size; j++)
        {
            if (i == mid || j == mid)
                cout << arr[i][j] << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}