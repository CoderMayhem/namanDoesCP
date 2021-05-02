#include<iostream>
#include<string>

using namespace std;

void genSubswithASCII(string s, string ans){

    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    
    char ch = s[0];
    int num = ch;
    string ros = s.substr(1);

    genSubswithASCII(ros, ans);
    genSubswithASCII(ros, ans+ch);
    genSubswithASCII(ros, ans+to_string(num));
}


int main(){

    genSubswithASCII("ab", "");

}