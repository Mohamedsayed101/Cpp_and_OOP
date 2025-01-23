// Write a C++ program to insert an element in an array at a specific position.
// #include<iostream>
// #include<string>
// #include<cmath>
// using namespace std;

// int main()
// {
//     int ent;
//     cout << "Enter the number of elements: ";
//     cin >> ent;
//     int* arr = new int[ent];
//     cout << "Enter elements "<<endl; 
//     for (size_t i = 0; i < ent; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "array elements: " ;    
//     for (size_t i = 0; i < ent; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout <<endl; 
//     int pos, val;
//     cout<<"Enter postion: ";cin >> pos;
//     cout <<endl; 
//     cout<<"Enter value: ";cin >> val;
//     cout <<endl; 
//     ent++;
//     arr[ent]=0;
//     for (size_t i = ent-1; i >= pos; i--)
//     {
//         arr[i] = arr[i-1];
//     }
//     arr[pos-1] = val;
//     cout <<endl; 
//     cout << "\nUpdated array elements: ";
//     for (size_t i = 0; i < ent; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout <<endl; 
//     delete[] arr;
//     return 0;
// }
