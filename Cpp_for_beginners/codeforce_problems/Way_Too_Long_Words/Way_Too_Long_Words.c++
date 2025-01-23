// #include <iostream>
// using namespace std;
// int main() {

//     return 0;
// }
// اشوف لو الكلمة عدد حروفها اكبر من 10 حروف بخليها  زى كده l10n =>يعنى اول حرف وبعدين اخر حرف وبينهم عدد الاحرف بينهم
//الحل:
#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;cin >> n;
    for(int i = 0; i < n; i++) {
    string s; 
    cin >> s;
    int x=s.size();
    if(x>10) cout <<s[0]<<x-2<<s[x-1]<<endl;
    else cout << s << endl;
    }        
    return 0;
}