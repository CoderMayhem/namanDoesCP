#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        long int n;
        cin>>n;
        long int boys[n];
        for(int i=0; i<n;i++){
            cin>>boys[i];
        }
        long int girls[n];
        for(int i=0; i<n;i++){
            cin>>girls[i];
        }
        sort(boys, boys+n);
        sort(girls, girls+n);

        long int MAX=0;
        long int sum1 = 0, sum2 = 0;

        for(int i=0; i<n; i++){
            
                sum1 = boys[n-1-i] + girls[i];
                sum2 = boys[i] + girls[n-1-i];

            if(sum1>=sum2 && sum1>=MAX){
                MAX =sum1;
            }else if(sum2>=sum1 && sum2>=MAX){
                MAX = sum2;
            }
        }
        cout<<MAX<<endl;
    }
}