#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int checkZeroRecursion(vector<int> &A, int i, int num, bool left){
    //base condition
    if(A[i]!=0 || i==0 || i== (A.size()-1)){
        return num;
    }
    
    if(left){
        num++;
        checkZeroRecursion(A,i-1,num,true);
    }else{
        num++;
        checkZeroRecursion(A,i+1,num,false);
    }
    //return 0;
}

int solve(int A, vector<int> &B) {
    int sum = 0;
    int k = 0;
    int ways = 0;
    for(int i=0; i< A; i++){
        sum = sum + B[i];
    }
    
    if(sum%3 != 0){
        return 0;
    }else{
        k = sum/3;
        ways++;
    }
    
    int first=0;
    int second = 0;
    
    int currSum = 0;
    
    for(int i=0; i< A; i++){
        currSum = currSum + B[i];
        if(currSum==k){
            first = i;
        }
        if(currSum==2*k){
            second = i;
        }
    }
    
    if(B[first]==0 && first!=0){
        ways = ways + checkZeroRecursion(B,first,0,true);
    }
    if(B[first+1]==0 && first+1!= second){
        ways = ways + checkZeroRecursion(B,first+1,0,false);
    }
    if(B[second]==0 && second!=first){
        ways = ways + checkZeroRecursion(B,second,0,true);
    }
    if(B[second+1]==0 && second+1!= A-1){
        ways = ways + checkZeroRecursion(B,second+1,0,false);
    }
    
    return ways;
}


int main(){

    vector<int> A{0,1,-1,0};
    cout<<solve(5,A)<<endl;
}
