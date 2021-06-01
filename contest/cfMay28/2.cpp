#include<iostream>
#include<math.h>
using namespace std;

long long int genSub(int d){

    string sub = "";

    for (int i = 0; i < d; i++)
    {
        sub.push_back('1');    
    }
    //cout<<sub<<endl;
    long long int ans = stoi(sub);
    //cout<<ans<<endl;
    return ans;
}

bool solve(long long int num){
    //base condition
    if(num%11==0){
        return true;
    }

    if (num<11)
    {
        return false;
    }
    

    long long int d = log10(num) + 1;
    long long int subs = genSub(d);
    
    if(num > subs){
        num = num -subs;
        solve(num);
    }else if(num == subs){
        return true;
    }else{
        num = num - pow(10,d-1);
        solve(num);
    }
}

int main(){


    long long int t; 
    cin>>t;

    while (t--)
    {

        long long int n;
        cin>>n;

        bool ans = solve(n);
        //solve(n);
        if (ans)
        {
            cout<<"YES"<<endl;
        }else
        {
            cout<<"NO"<<endl;
        }
        
        
    }
    
}