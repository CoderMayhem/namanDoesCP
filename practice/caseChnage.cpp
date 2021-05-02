#include<iostream>
#include<string>
using namespace std;

//LOGIC: lower case character ('a') has an ascii value 32 greater than UPPER CASE character.


int main(){

string str;
cin>>str;

//change CASE
for(int i=0; i<str.size(); i++){
    if(str[i]>='a' && str[i]<='z'){
        str[i] -= 32;
    } else if(str[i]>='A' && str[i<='Z']){
        str[i] += 32;
    }
}
    cout<<str<<endl;
    return 0;
}