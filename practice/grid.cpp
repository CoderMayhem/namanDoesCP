#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        long int n,m,k;
        cin>>n>>m>>k;
        if(((n*m)-1)==k){
            cout<<"YES"<<endl;
        }else
        {
            cout<<"NO"<<endl;
        }
        
    }
}