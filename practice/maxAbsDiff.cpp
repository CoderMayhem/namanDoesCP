#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int maxArr(vector<int> &A) {
    
    vector<int> B(A.size(),0);
    int maxA = INT_MIN; 
    int maxB = INT_MIN;
    int minA = INT_MAX;
    int minB = INT_MAX;
    int minDiff;

    for(int i =0; i<A.size(); i++){
        B[i] = A[i];
    }
    for (int i=0;i<A.size();i++){
        
        A[i] = A[i] + i+1;
        
        cout<<A[i]<<endl;
        if(A[i]>maxA){
            maxA= A[i];
        }
        
        if(A[i]<minA){
            minA = A[i];
        }

        cout<<"Min A : "<<minA<<endl;
        
        B[i] = B[i] - i-1;

        if(B[i]>maxB){
            maxB = B[i];
        }
        
        if(B[i]<minB){
            minB = B[i];
        }
    }
    
    int r1 = maxA - minA;
    int r2 = maxB - minB;

    // cout<<maxA<<endl;
    // cout<<minA<<endl;
    // cout<<maxB<<endl;
    // cout<<minB<<endl;

    return r1>r2 ? r1 : r2;
}


int main(){
    vector<int> A{-70, -64, -6, -56, 64, 61, -57, 16, 48, -98};
    cout<<maxArr(A)<<endl;
}