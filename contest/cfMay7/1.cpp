#include<iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--)
    {
        long long int A,B;
        cin>>A>>B;

        int k1 =1;
        int k3 =3;
         
        if(B == 1){
            cout<<"NO"<<endl;
        }else{
            long long int k2 = B*k3 - k1;
            cout<<"YES"<<endl;
            cout<<A*k1<<" "<<A*k2<<" "<<A*B*k3<<endl;
        }
    }
    
}