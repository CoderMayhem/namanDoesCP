#include<iostream>
#include<math.h>
using namespace std;

int main(){

    long int t;
    cin>>t;

    while(t--){

        long int c;
        cin>>c;
        
        bool flag = true;
        long int d;

        d = log2(c);

        long int number = pow(2,d);
        long int maxProduct=0;

        long int A = pow(2,d)-1;
        long int B = A^c;
        maxProduct = A*B;
        cout<<maxProduct<<endl;
    }
}