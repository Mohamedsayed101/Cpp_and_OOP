#include <iostream>
#include <string>
/*
Write a user-defined function called Lower_part() that takes 2D array A, with size N rows
and N columns as argument and prints the lower half of the array.
*/
using namespace std;

void Lower_part(int A[][100], int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i >= j)
            {
                cout << A[i][j] << " ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    int N;
    cout << "Enter the size of the array: ";
    cin >> N;
    int A[100][100];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> A[i][j];
        }
    }
    Lower_part(A, N);

    return 0;
}