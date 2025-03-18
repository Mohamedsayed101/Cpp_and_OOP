/*
    عندى string هشوف ال x النهائية بكام علما ان ال x = الابتدائية ب 0
*/
#include <iostream>
using namespace std;
int main() {
    int n,ans=0;
    cin>>n;
    for(int i=1;i<=n;i++){
    string s;
    cin>>s;
        if(s=="++x"||s=="++X"||s=="x++"||s=="X++")
        ans++;
        else
        ans--;
    }
    cout<<ans;
    return 0;
}