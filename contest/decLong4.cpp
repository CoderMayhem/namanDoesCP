#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n, k, diff, count;
        cin>>n>>k;
        int arr[n];
        if(n==k){
            for(int i=1;i<=n;i++){
                cout<<i<<" ";
            }
        }
        else{
         for(int i=1;i<=n;i++){
            if(i%2!=0) arr[i]=-i;
            else arr[i] = i;
        }
        count = n/2;
        if(count<k){
            diff = k - count;
            for(int i=n; i>=0; i--){
                if(i%2!=0) {arr[i]=i;
                diff--;}
                if(diff == 0) break;
            }
        } else if(count>k){
            diff = count - k;
            for(int i=n; i>=0; i--){
                if(i%2==0) {arr[i]=-i;
                diff--;}
                if(diff == 0) break;
            }
        }
        for(int i=1; i<=n; i++){
            cout<<arr[i]<<" ";
        }
        }
        cout<<endl;
    }
    return 0;
}
