#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    int H,x,y,C;

    while(t--){
        cin>>H>>x>>y>>C;
        int m = x + floor(y/2);
        if((m*H)<=C){
            cout<<"YES"<<endl;
        }else
        {
            cout<<"NO"<<endl;
        }
        
    }
}