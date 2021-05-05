#include<iostream>
#include<string>

using namespace std;

bool checkIfPresent(char ch, string str){
    int a = str.find(ch);
    
    if(a==-1)
    {
        return false;
    }
    else
    {
        return true;
    }
    
}


int main(){

    char ch = 'a';
    string c;

    if(checkIfPresent(ch,c)){
        cout<<"True"<<endl;
    }else
    {
        cout<<"False"<<endl;
        cout<<c<<endl;
    }
    
}