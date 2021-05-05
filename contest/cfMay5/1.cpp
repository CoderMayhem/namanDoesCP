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

    int t;
    cin>>t;


    while(t--){
        int n;
        cin>>n;

        string str;
        cin>>str;
        string done;
        bool repeat = false;

        char prev = '0';

        for(int i=0; i<n;i++){
            prev = str[i];
            if((i!=n-1) && (str[i+1]!=prev)){
                if(!checkIfPresent(prev,done)){
                    done.insert(0,1,prev);
                }
                if(!checkIfPresent(str[i+1], done)){
                    done.insert(0,1,str[i+1]);
                }else{
                    repeat = true;
                    break;
                }
            }
        }
        if(repeat){
            cout<<"NO"<<endl;
        }else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}