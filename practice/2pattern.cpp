#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0; i<2*n; i++){
       for(int j=0; j<2*n; j++){
           if(i<n){
               if(j>=i+1 && j<2*n-i-1){
               cout<<"  ";
            }else{
               cout<<"* ";
            }
           }
           else{
               if(j<i && j>=2*n-i){
               cout<<"  ";
            }else{
               cout<<"* ";
            }
           }
       }
       cout<<endl;
    }
    return 0 ;
}