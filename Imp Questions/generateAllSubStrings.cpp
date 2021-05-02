#include<iostream>
#include<string>

using namespace std;

void genSubs(string s, string ans){
    //base case
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }

    char ch = s[0];
    string ros = s.substr(1);

    genSubs(ros, ans);
    genSubs(ros, ans+ch);
}

int main(){

    genSubs("abc","");

}