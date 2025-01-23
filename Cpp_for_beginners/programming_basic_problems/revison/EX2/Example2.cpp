// C++ code to swap the element of first

// and last row and display the result

#include <iostream>

using namespace std;

void interchangeFirstLast(int m[][4], int size)

{

    for (int i = 0; i < size; i++)

    {

        int t = m[0][i];

        m[0][i] = m[size - 1][i];

        m[size - 1][i] = t;
    }
}

int main()

{

    int m[4][4] = {{3, 4, 5, 0},

                   {2, 6, 1, 2},

                   {2, 7, 1, 2},

                   {2, 1, 1, 2}};

    int size = 4;

    interchangeFirstLast(m, size);

    for (int i = 0; i < size; i++)

    {

        for (int j = 0; j < size; j++)

            cout << m[i][j] << " ";

        cout << endl;
    }

    return 0;
}