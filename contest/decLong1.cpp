#include<iostream>
#include<cmath>
#include<climits>
using namespace std;

int main(){
    int D1, v1, D2, v2, P, d;

    cin >> D1 >> v1 >> D2 >> v2 >> P;

    int c = ceil((float(P+v1*D1+v2*D2)/float(v1+v2))-1);

    int m = ceil(float(P/v1) + D1 -1 );
    int n = ceil(float(P/v2) + D2 -1 );

    int d0 = min(m,n); 
    d = min(c, d0);
    cout<<d<<endl;
}