#include<iostream>
using namespace std;

bool isInteger(double n){

    int x = n;
    double temp = n-x;
    if (temp>0)
    {
        return false;  
    }
    return true;
    
}

int main(){

    int t;
    cin>>t;

    while (t--)
    {
        int k;
        cin>>k;

        bool flag = true;
        int steps = 0;
        int e = 1;
        while(flag){
            
            double w = double ((100-k)*e)/k ;

            if(isInteger(w)){
                flag = false;
                steps = e+w;
            }else{
                e++;
            }
            
        }

        cout<<steps<<endl;
        
    }
}