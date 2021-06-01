#include<bits/stdc++.h>
#include<iostream>
#include<string>

using namespace std;

vector<int> increment(vector<int> A, int start){
    cout<<"Called2"<<endl;
    string number;
    cout<<"Calledxx"<<endl;
    for(int i = start; i<A.size(); i++){
        number.append(to_string(A[i]));
    }
    cout<<"Called3"<<endl;
    int length = number.length();
    cout<<length<<endl;
    cout<<"Called4"<<endl;
    int k = stoi(number);
    cout<<"Called5"<<endl;
    k = k + 1;
    cout<<k<<endl;
    cout<<"Called6"<<endl;
    number = to_string(k);
    int arr[length];
    for(int i=0; i<length;i++){
        arr[i] = (int)number.at(i) - 48;
    }

    vector<int> B;
    cout<<"Called7"<<endl;
    B.assign(arr, arr+length);
    
    
    return B;
}

vector<int> plusOne(vector<int> &A) {
    cout<<"Called1"<<endl;
    bool mostSigBitReached = false;
    vector<int> ansVec;
    int start = 0 ;
    for(int i=0; i<A.size();i++){
        if(!mostSigBitReached){
            if(A[i] == 0 && i<(A.size()-1)){
                continue;
            }else{
                mostSigBitReached = true;
                start = i;
                break;
            }
        }
    }
    A = increment(A, start);
    for(int i = start; i < A.size() ; i++){
        ansVec[i-start] = A[i];
    }
    
    return ansVec;
}

int main(){

vector<int> A{0};
A = plusOne(A);
for(int i=0; i<A.size(); i++){
    cout<<A[i]<<" ";
}
cout<<endl;
}
