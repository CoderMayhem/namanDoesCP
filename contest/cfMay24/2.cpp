#include<iostream>
#include<bits/stdc++.h>
//#define int long long int
using namespace std;

int getSubSeqLength(long long int arr[], long long int n, int length, long long int max){
    //base condition
    if(max == 0){
        return length;
    }

    long long int start = arr[0];

    long long int minPointer, maxPointer;
    int newLength = 0;

    minPointer = start + arr[max];
    maxPointer = 0;

    if(minPointer>maxPointer){
        max -- ;
        return getSubSeqLength(arr,n,1,max);
    }else{

        for (long long int i = 0; i < n; i++)
        {
            if (arr[i]>= minPointer && arr[i]<= maxPointer)
            {
                newLength++;
            }
            
        }
        newLength = newLength +2;

        if (newLength > length)
        {
            length = newLength;
        }

        max--;

        return getSubSeqLength(arr,n,length,max);
        
    }
    

}

bool checkEqual(long long int arr[], long long int n){

    bool flag = true;

    for (long long int i = 0; i < n; i++)
    {
        if(i<n-1){
            if (arr[i] != arr[i])
            {
                flag = false;
            }
        
        }
    }
    
    return flag;

}


int main(){

    long long int t;
    cin>>t;
    while (t--)
    {
        long long int n;
        cin>>n;

        long long int arr[n];
        bool flag = false;

        for (long long int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(arr[i]<0){
                flag = true;
            }
        }

        long long int k = sizeof(arr)/sizeof(arr[0]);

        sort(arr, arr+k);

        if (flag)
        {
            if(!checkEqual(arr,n)){

                cout<<getSubSeqLength(arr,n,0,n-1)<<endl;

            }else
            {
                cout<<1<<endl;
                return 0;
            }
            
        }else
            {
                cout<<1<<endl;
                return 0;
            }
        
    }
    
}