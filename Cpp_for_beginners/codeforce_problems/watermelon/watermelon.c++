//بسم الله الرحمن الرحيم
//عايز اقسم بطيخة على شحصين بحيث كل واحد فيهم ياخد عدد زوجى
//الحل: لازم الوزن بتاع البطيخة يبقى عدد زوجى وفى نفس الوقت اكبر من 2
// made by mohamed sayed omar
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <array>
#include <algorithm>
using namespace std;
int main()
{   // input  Enter weight of watermelon and this number must be even number
    int w;
    cin >> w;
    // processing  check if the number is even and this number greater than two
    if (w % 2 == 0 && w > 2)
        // if condition has done print yes ,else print No and end the program
        cout << "yes\n";
    else
        cout << "No" << endl;
    // end program
    return 0;
}