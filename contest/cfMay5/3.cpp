#include<iostream>
#include<cmath>


using namespace std;



int main(){


    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        if(n==1){
            cout<<1<<endl;
            continue;
        } else if(n==2){
            cout<<-1<<endl;
            continue;
        }

        int**arr = new int*[n];
        for(int i=0; i<n; i++){
            arr[i] = new int[n];
        }

       
        long int k = 1;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if((i+j)%2==0){
                    arr[i][j]=k;
                    k++;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if((i+j)%2!=0){
                    arr[i][j] = k;
                    k++;
                }
            }
            
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        
        
        
    }
}