//NOTE : This method used recursion by TLE was thrown in test 2. Accepted code is in beansFinal.cpp

#include<iostream>
#include<cmath>
using namespace std;

bool canBeDistributed(long long int r, long long int b, long long int d){
    //base case failure
    if(d==0 && r!=b){
        return false;
    }
    if(r<=0 || b<=0){
        return false;
    }

    if(abs(r-b)<=d){    //base case success
        return true;
    }else{              //recursion
        if(r<b){
            canBeDistributed(r-1,b-d-1,d);
        }else if(r>b){
            canBeDistributed(r-d-1,b-1,d);
        }
    }
}

int main(){

    int t;
    cin>>t;

    while(t--){

        long long int r,b,d;
        cin>>r>>b>>d;

        if(canBeDistributed(r,b,d)){
            cout<<"YES"<<endl;
        }else
        {
            cout<<"NO"<<endl;
        }
        
    }

    return 0;

}