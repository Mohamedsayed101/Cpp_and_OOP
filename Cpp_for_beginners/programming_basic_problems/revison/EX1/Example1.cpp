#include <iostream>
#include<string>
/*
Write C++ program to display a matrix as shown below. The diagonal of the matrix fills with 0.
The lower side fills will -1s and the upper side fills with 1s
*/
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the matrix: ";
    cin >> n;
    
    int matrix[n][n];
    
    // Fill the matrix with 0s on the diagonal
    for (int i = 0; i < n; i++) {
        matrix[i][i] = 0;
    }
    
    // Fill the lower side with -1s
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            matrix[i][j] = -1;
        }
    }
    
    // Fill the upper side with 1s
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            matrix[i][j] = 1;
        }
    }
    
    // Print the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    

    return 0;
}