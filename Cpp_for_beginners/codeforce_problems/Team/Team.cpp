/*
   ثلاث اصدقاء فى مسابقة بيجاوب على السؤال اذا اثنين او اكثر منهم اتفقوا على الاجابة وعايزك تحسب عدد المسائل المحلولة 
*/
#include <iostream>
using namespace std;
int main() {
    int n,a,b,c,count=0;cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a>>b>>c;
        if(a+b+c>=2)
        count++;
    }
    cout<<count;
    system("pause");
    return 0;
}