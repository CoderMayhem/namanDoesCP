#include<iostream>
#include<string>

using namespace std;

string rem(string s){
    //base case
    if(s.length()==0){
        return "";
    }

    char ch = s[0];
    string ans = rem(s.substr(1));

    if(ch==ans[0]){
        return ans;
    } else{
        return (ch+ans);
    }

}

int main(){

    cout<<rem("aaabbbbcceeeedddd")<<endl;

}