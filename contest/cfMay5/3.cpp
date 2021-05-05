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
        } else if(n==3){
            cout<<2<<" "<<9<<" "<<7<<endl;
            cout<<4<<" "<<6<<" "<<3<<endl;
            cout<<1<<" "<<8<<" "<<5<<endl;
            continue;
        }

        int**arr = new int*[pow(n,2)];
        for(int i=0; i<pow(n,2); i++){
            arr[i] = new int[pow(n,2)];
        }

        if(n%2==0){
            for(int i=0; i<pow(n,2); i++){
                for(int j=0; j<pow(n,2); j++){
                    if(i%2==0){
                        
                    }
                }
            }    
        }

    }
}