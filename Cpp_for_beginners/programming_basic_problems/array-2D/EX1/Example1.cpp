#include <iostream>
using namespace std;
/*
Write a c++ code of a 2D array of integers and its size as arguments and displays the
elements which lie on diagonals.
     0 1 2
  0  1 2 3
  1  4 5 6
  2  7 8 9
*/
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

    cout << "Elements on diagonals:\n";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j)
                cout << arr[i][j] << " ";
            else if (i + j == size - 1)
                cout << arr[i][j] << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}