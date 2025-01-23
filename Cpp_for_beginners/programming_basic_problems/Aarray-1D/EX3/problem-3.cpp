//Write a C++ program to find the second smallest elements in a given array of integers.
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
//     cout << "Enter elements: "; 
//     for (size_t i = 0; i < ent; i++)
//     {
//         cin >> arr[i];
//     } cout << endl;
//     cout << "array elements: " ;    
//     for (size_t i = 0; i < ent; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout <<endl;
//     int smallest,second_smallest;
//     smallest = min(arr[0],arr[1]);
//     second_smallest = max(arr[0],arr[1]);

//     for (size_t i = 2; i < ent; i++)
//     {
//         if(smallest >arr[i] )
//         {
//             second_smallest = smallest ;            
//             smallest = arr[i];
//         }
//         else
//         {
//             if(second_smallest > arr[i] )
//                 second_smallest = arr[i];
//         }
//     }
//     cout << "Second smallest element: " << second_smallest << endl;
//     return 0;
//     delete[]arr;
//     return 0;
// }
