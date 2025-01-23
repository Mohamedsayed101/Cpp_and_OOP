#include <iostream>
#include <string>

using namespace std;

/*
Task 1

Write c++ program shows how to find the maximum element in a dynamic
array:
*/
int main()
{
    cout << "Enter number of elements: ";
    int n;
    cin >> n;
    int *arr = new int[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    cout << "Maximum element is: " << max << endl;
    delete[] arr;
    return 0;
}