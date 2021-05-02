#include<iostream>
#include<string>
using namespace std;

int main(){

    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        string s;
        cin>>s;
        int groups = 0;
        char prev = '0';


        for(int j=0; j<s.length(); j++){
            if(s[j] == '1' && prev == '0'){
                groups++;
                prev = s[j];
            } else{
                prev = s[j];
            }
        }
        cout<<groups<<endl;
    }
}