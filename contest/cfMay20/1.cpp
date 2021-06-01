/*   “A man wrapped up in himself makes a very small bundle.”   */
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define int long long int

bool isInteger(long double N)
{
 
    // Convert float value
    // of N to integer
    int X = N;  
 
    double temp2 = N - X;
 
    // If N is not equivalent
    // to any integer
    if (temp2 > 0) {
        return false;
    }
    return true;
}
 
int32_t main(){

    int t;
    cin>>t;

    cout.setf(ios::fixed);
    
    while (t--)
    {
        int n;
        cin>>n;

        long double r;
        r = log2(n);
        long double m = r;
        //cout<<m<<endl;
        bool flag = isInteger(m);
        //cout<<flag<<endl;

        if(flag){
            cout << setprecision(0) <<n-1<<endl;
            //cout<<n-1<<endl;
        }else
        {
            int x = floor(r);
            cout<<setprecision(0)<<(pow(2,x)-1)<<endl;
        }
    }
}