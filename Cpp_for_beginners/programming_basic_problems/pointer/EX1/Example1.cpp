#include<iostream>
#include<string>

using namespace std;
/*
Write C++ code to print an array using pointer
*/
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int *arrPtr = arr;
    for (size_t i = 0; i < (sizeof(arr)/sizeof(arr[0])); i++)
    {
        cout << *(arrPtr + i) << " ";  // Accessing elements using pointer
    }cout<<endl;
    
    return 0;
}