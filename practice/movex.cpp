#include<iostream>
#include<string>

using namespace std;

string moveallx(string s){

    //base case
    if(s.length()==0){
        return "";
    }

    char ch = s[0];
    string ans = moveallx(s.substr(1));

    if(ch == 'x'){
        return ans+ch;
    }
    return (ch+ans);
    
}

int main(){
    cout<<moveallx("axxbdxcefxhix")<<endl;
}