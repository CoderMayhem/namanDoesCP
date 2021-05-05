#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main(){
    long int t;
    cin>>t;

    while(t--){
        long long int n;
        cin>>n;

        int logVal = ceil(log10(n));
        if(logVal<=1){
            if(n==10){
                cout<<9<<endl;
                continue;
            }else
            {
                cout<<n<<endl;
                continue;
            }
        }

        long int ans = 9;
        string charK="1";
        bool crossed = false;
        for(int i=0; i<logVal; i++)
        {
            charK.insert(0,1,'1');
            long int k = stoi(charK);
            for(int j=1;j<10;j++){
                if(k*j<=n)
                {
                    ans++;
                }
                else
                {
                    crossed = true;
                    break;
                }
            }
            if(crossed){
                break;
            }
        }
        cout<<ans<<endl;
    }
}