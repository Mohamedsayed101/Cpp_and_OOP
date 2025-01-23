// #include <iostream>
// using namespace std;
// int main() {

//     return 0;
// }
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[5][5], count = 0;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (arr[i][j] == 1)
            {
                if (i == 3)
                {
                    if (j > 3)
                    {
                        swap(arr[i][j], arr[i][j - 1]);
                        count++;
                    }
                    else if (j < 3)
                    {
                        swap(arr[i][j], arr[i][j + 1]);
                        count++;
                    }
                }
                else if (i > 3)
                {
                    if (j == 3)
                    {
                        swap(arr[i][j], arr[i - 1][j]);
                        count++;
                    }
                    else if (j < 3)
                    {
                        swap(arr[i][j], arr[i - 1][j + 1]);
                        count++;
                    }
                    else
                    {
                        swap(arr[i][j], arr[i - 1][j - 1]);
                        count++;
                    }
                }
                else
                {
                    if (j == 3)
                    {
                        swap(arr[i][j], arr[i + 1][j]);
                        count++;
                    }
                    else if (j < 3)
                    {
                        swap(arr[i][j], arr[i + 1][j + 1]);
                        count++;
                    }
                    else
                    {
                        swap(arr[i][j], arr[i + 1][j - 1]);
                        count++;
                    }
                }
            }
        }        
    }
    cout<<count<<endl;
        return 0;
}   