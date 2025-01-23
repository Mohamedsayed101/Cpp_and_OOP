//Write a C++ program to find a number which occurs odd number of times of a given array of positive integers.
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
//     int count[100] = {0};
    
//     for (size_t i = 0; i < ent ; i++)
//         count[arr[i]]++;
//     cout<<"\n================================================"<<endl;

//     for (size_t i = 0; i < 100; i++)
//     {
//         if (count[i] % 2!= 0)
//         {
//             cout << "Number which occurs odd number of times: " << i << endl;
//         }
//     }
//     delete[] arr;
//     return 0;
// }
