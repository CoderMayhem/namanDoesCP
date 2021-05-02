#include<iostream>
#include<cmath>
using namespace std;

long long int getAns(long long int a, long long int b);

int main(){
    long int t;
    long long int a , b;
    long long int ans;
    cin>>t;
    for(int i = 0; i<t; i++){
        cin>>a>>b;
        ans = getAns(a,b);
        cout<<ans<<endl;
    }
    return 0;
}

long long int getAns(long long int a, long long int b){
    if(a%2!=0 && b%2!=0){
        return floor((double(a*b)/2.) +1);
    } else{
        return (a*b)/2;
    }
}