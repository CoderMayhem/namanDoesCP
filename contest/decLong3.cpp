#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin >>t;
    for(int i=0; i<t; i++){
        long int n,d;
        int risk=0;
        int no_risk=0;  
        cin>>n>>d;
        long int arr[n];
        for(int i = 0; i<n; i++){
            cin>>arr[i];
            if(arr[i]>=80 || arr[i]<=9){
                risk++;
            } else{
                no_risk++;
            }
        }
        int d1 = risk!=0 ? ceil(double(risk)/d) : 0;
        int d2 = no_risk!=0 ? ceil(double(no_risk)/d) : 0;
        cout<<d1+d2<<endl;
    }
}