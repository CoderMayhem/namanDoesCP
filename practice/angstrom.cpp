#include<iostream>
#include<cmath>
using namespace std;

int main(){
    cout<<"Programme to check if a given number is armstrong number or not!"<<endl;
    int n;
    cin>>n;

    int sum =0;
    int original = n;

    while(n>0){
        int last = n%10;
        sum = sum + pow(last,3);
        n=n/10;
    }

    if(original == sum){
        cout<<"Armstrong"<<endl;
    }else
    {
        cout<<"Not Armstrong"<<endl;
    }
}