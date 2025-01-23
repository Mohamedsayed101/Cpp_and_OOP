// Write a C++ program to find the most occurring element in an array of integers.

// #include<iostream>
// #include<string>
// #include<cmath>
// using namespace std;

// int main()
// {
//     int arr[]={4, 5, 9, 12, 9, 22, 45, 7,22,9,22};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     cout << "orginal array:" << endl;
//     for (size_t i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     int max_repeat = 0;
//     for (size_t i = 0; i < size ; i++)
//     {
//         int count = 1;
//         for (size_t j = i + 1; j < size; j++)
//         {
//             if (arr[i] == arr[j])
//                 count++;
//         }
//         if (count > max_repeat)
//             max_repeat = count;
//     }
//     for (size_t i = 0; i < size ; i++)
//     {
//         int count = 1;
//         if (max_repeat == 1)
//         {
//             cout<<"No repeat"<<endl;
//             break;
//         }
//         for (size_t j = i + 1; j < size; j++)
//         {
//             if (arr[i] == arr[j])
//                 count++;
//         }
//         if (count == max_repeat)
//             cout << "Most occurring element: " << arr[i] << " " << "Frequency: " << max_repeat << endl;
//     }
    
//     return 0;
// }


