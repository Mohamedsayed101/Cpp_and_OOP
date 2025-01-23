#include <iostream>
#include <string>

using namespace std;
/*
Write a C++ function that accepts a 2D array of integers and its
size as arguments and then displays the elements which lie on
diagonals.
*/

void displayDiagonals(int arr[][100], int a)
{
    for (size_t i = 0; i < a; i++)
    {
        for (size_t j = 0; j < a; j++)
        {
            if (i == j)
                cout << arr[i][j] << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}
int main()
{
    cout << "Enter number of rows and columns\n";
    int a;
    cin >> a;
    if (a > 100)
    {
        cout << "error " << endl;
        return 0;
    }
    int arr[a][100];
    cout << "Enter elements of array\n";
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Elements on diagonals are: \n";
    displayDiagonals(arr, a);
    return 0;
}