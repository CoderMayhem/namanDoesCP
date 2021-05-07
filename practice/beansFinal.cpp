#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        long long int r,b,d;
        cin>>r>>b>>d;

        if(r<=b){
            //note that in this case we can't use more than r packets.
            //so b can't exceed r*(d+1)

            if(b>(r*(d+1))){
                cout<<"NO"<<endl;
            }else
            {
                cout<<"YES"<<endl;
            }
            
        }else{
            if(r>(b*(d+1))){
                cout<<"NO"<<endl;
            }else
            {
                cout<<"YES"<<endl;
            }
            
        }
    }
}