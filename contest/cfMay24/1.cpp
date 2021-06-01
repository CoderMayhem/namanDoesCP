#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        int arr[n];
        int min = 0;
        int minFq = 0;

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(i==0){
                min = arr[i];
                continue;
            }
            
            if (arr[i] < min)
            {
                min = arr[i];
            }
        }

        for(int i=0; i<n; i++){
            if(arr[i] == min){
                minFq++;
            }
        }

        int ans = n - minFq;
        cout<<ans<<endl;


        
    }
    
}