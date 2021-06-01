#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> findPerm(const string A, int B) {
    
    vector<int>v ;

    for(int i=0; i<B;i++){
        v.push_back(i+1);
    }
    //cout<<"Done"<<endl;
    
    int pointer = 0;
    
    if(A[0] == 'D'){
        pointer = B-1;
        for(int i=1;i<B-1;i++){
            if(A[i]=='I' && A[i-1]=='D'){
                pointer--;
            }else if(A[i]=='I' && A[i-1]=='I'){
                pointer--;
            }else if(A[i]=='D' && A[i-1]=='D'){
                pointer++;
            }
        }
    }else{
        pointer = 0;
        for(int i=1;i<B-1;i++){
            if(A[i]=='D' && A[i-1]=='I'){
                pointer++;
            }else if(A[i]=='D' && A[i-1]=='D'){
                pointer++;
            }else if(A[i]=='I' && A[i-1]=='I'){
                pointer++;
            }
        }
    }

    //cout<<"Done"<<endl;
    
    int number = pointer+1;
    v[0] = number; 
    //int left = B;
    int lnum = number-1, rnum = number-1;
    //int i=0;
    for(int i=0; i<B-1; i++){
        if(A[i]=='D'){
            v[i]=lnum;
            lnum--;
        }
        
        if(A[i]=='I'){
            v[i]==rnum;
            rnum++;
        }
    }
    //cout<<"Done"<<endl;
    
    return v;
}





int main(){

    vector<int> k = findPerm("ID",3);

    for(int i=0; i<k.size();i++){
        cout<<k[i]<<endl;
    }


}