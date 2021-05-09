#include<iostream>
using namespace std;

long int findPairs(long int arr[], long int i, long int j, long int n, long int ans){
    //base condition
    if(i==n-1){
        return ans;
    }

    if (arr[j]>arr[i])
    {
        if((arr[j]-arr[i])==(j-i)){
            j++;
            ans++;
            if(j==n){
                i++;
                j=i+1;
            }
            findPairs(arr,i,j,n,ans);
        }else
        {
            j++;
            if(j==n){
                i++;
                j=i+1;
            }
            findPairs(arr,i,j,n,ans);   
        }
        
    }else
    {   
        j++;
        if(j==n){
            i++;
            j=i+1;
        }
        findPairs(arr,i,j,n,ans);
    }
}

int main(){

    long int t;
    cin>>t;

    while (t--)
    {
        long int n;
        cin>>n;

        long int arr[n];

        for (long int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        
        long int ans = 0;
        /*for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if(arr[j]>arr[i]){
                    if((arr[j]-arr[i]) == (j-i)){
                        ans++;
                    }
                }
            }
        }
        cout<<ans<<endl;*/

        cout<<findPairs(arr,0,1,n,ans)<<endl;
    }
}