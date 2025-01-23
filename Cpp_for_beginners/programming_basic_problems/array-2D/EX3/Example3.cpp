#include <iostream>
#include <string>
using namespace std;
/*
3. Transpose of a matrix can be calculated by interchanging rows and columns. For example, if the value of a
matrix say Matrix A is:
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
    cout << "Transpose of the given matrix is:\n";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}