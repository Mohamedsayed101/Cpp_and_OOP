#include<iostream>
#include<string>
#include<vector>
using namespace std;
/*
input => 1+2+1
output => 1+1+2
*/
int main(){
    string input;
    getline(cin, input);
    
    int i = 0;
    while(i < input.length()){
        if(input[i] == '+'){
            cout<<input[i]<<endl;
        }
        else{
            for(int j = i; j < input.length(); j+2){
                char min = input[i+j];
                if(input[j] >=input[i+2]){
                    input[j] = input[i+2];
                    input[i+2] = min;                 
                }
            }
            
        }
    }
    vector<string>names ={"mohamed","sayed","mohamed"};
    cout<<"Number of elements = "<<names<<
    return 0;
}