#include <iostream>
#include <string>
/*
4. Write a program in C++ code of 2D array to multiply two matrices.
*/
using namespace std;

int main()
{
    int rows1, cols1, rows2, cols2;
    cout << "Enter number of rows for the first matrix: ";
    cin >> rows1;
    cout << "Enter number of columns for the first matrix: ";
    cin >> cols1;
    cout << "Enter number of rows for the second matrix: ";
    cin >> rows2;
    cout << "Enter number of columns for the second matrix: ";
    cin >> cols2;

    if (cols1 != rows2)
    {
        cout << "error" << endl;
        return 0;
    }

    int arr1[rows1][cols1];
    int arr2[rows2][cols2];

    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            cin >> arr1[i][j];
        }
    }

    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            cin >> arr2[i][j];
        }
    }

    int result[rows1][cols2];

    cout << "Resultant matrix is: " << endl;
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++)
            {
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    for (size_t i = 0; i < cols1; i++)
    {
        for (size_t j = 0; j < rows2; j++)
        {
            cout << result[i][j] << "  ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}