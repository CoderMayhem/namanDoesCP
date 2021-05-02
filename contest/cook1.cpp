#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int k=0;k<t;k++){
        int n;
        cin>>n;
        char array[n];
        int count=0;
        string s;
        cin.getline(s,n);
        strcpy(array, s.c_str());
        for(int i=0;i<n;i++){
            if(array[i]==0){
                count++;
            }
        }
        if(count>30){
            cout<<"NO"<<endl;
        } else{
            cout<<"YES"<<endl;
        }
    }
}