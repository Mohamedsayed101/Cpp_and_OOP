#include <iostream>
using namespace std;
int main() {
    int n,a,b,c,count=0d;cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a>>b>>c;
        if(a+b+c>=2)
        count++;
    }
    cout<<count;
    return 0;
}