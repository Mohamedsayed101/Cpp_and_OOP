#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        if (tolower(a[i]) < tolower(b[i]))
        {
            cout << -1;
            return 0;
        }
        if (tolower(a[i]) > tolower(b[i]))
        {
            cout << 1;
            return 0;
        }
    }

    cout << 0; // if all characters are equal, return 0
    return 0;
}