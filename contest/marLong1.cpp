#include<iostream>
using namespace std;

void check(int arr[], int N, int H, int x, int i){
    
    if(i >= N){         //base consition
        cout<<"NO"<<endl;
        return;
    }

    if(H<= arr[i]+x){
        cout<<"YES"<<endl;
    } else{
        check(arr, N, H, x, i+1);
    } 
}

int main(){

    int N,H,x;

    cin>>N>>H>>x;
    int arr[N];
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }

    check(arr, N,H,x,0);
}