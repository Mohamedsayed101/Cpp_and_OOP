#include <iostream>
#include <string>

using namespace std;
/*
Q 1

CREATE A STRUCTURE CALLED TIME. ITS THREE MEMBERS,

ALL TYPE INT,SHOULD BE CALLED HOURS, MINUTES, AND SECONDS.

WRITE A PROGRAM THAT PROMPTS THE USER TO ENTER A TIME VALUE IN HOURS, MINUTES, AND
SECONDS.

THIS CAN BE IN 12:59:59 FORMAT, OR EACH NUMBER CAN BE ENTERED AT A SEPARATE PROMPT
(“ENTER HOURS:”, AND SO FORTH). THE PROGRAM SHOULD THEN STORE THE TIME IN A VARIABLE
OF TYPE STRUCT TIME, AND FINALLY PRINT OUT THE TOTAL NUMBER OF SECONDS

REPRESENTED BY THIS TIME VALUE: LONG TOTALSECS = T1.HOURS*3600 + T1.MINUTES*60 +
T1.SECONDS.
*/

struct Time {
    int hours;
    int minutes;
    int seconds;
};
void TotalSeconds( Time T){
    int totalSeconds = T.hours * 3600 + T.minutes * 60 + T.seconds;
    cout << "Total seconds: " << totalSeconds << endl;
}
int main() {
    Time T;
    cout << "Enter hours: ";
    cin >> T.hours;
    cout << "Enter minutes: ";
    cin >> T.minutes;
    cout << "Enter seconds: ";
    cin >> T.seconds;
    TotalSeconds(T);
    return 0;
}