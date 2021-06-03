#include<iostream>
#include<bits/stdc++.h>

using namespace std;

#include<bits/stdc++.h>
vector<vector<int>> fill(vector<vector<int>> &arr, int i, int j, int c, int s){
    
    int k = arr.size();
    int i_start = i;
    int j_start = j;
    //cout<<k<<endl;
    //cout<<s<<endl;
    
    //base condition
    if(c > pow(k,2)) return arr;
    
    while(j<=s-1){
        c++;
        arr[i][j] = c;
        if(c==pow(k,2)) return arr;
        j++;
        //cout<<j<<endl;
    }
    j--;
    i++;
    while(i<=s-1){
       c++;
       arr[i][j] = c;
       if(c==pow(k,2)) return arr;
       i++;
    }
    i--;
    j--;
    while(j>=j_start){
        c++;
        arr[i][j] = c;
        if(c==pow(k,2)) return arr;
        j--;
    }
    j++;
    i--;
    while(i>=i_start+1){
        c++;
        arr[i][j]=c;
        if(c==pow(k,2)) return arr;
        i--;
    }
    i++;
    //c++;
    s=s-1;
    //cout<<"Sending c : "<<c<<endl;
    return fill(arr,i,j+1,c,s);
}


vector<vector<int> > generateMatrix(int A) {
    
    int n = A;
    
    vector<vector<int>> arr(n , vector<int> (n, 0));
    //cout<<"Ok"<<endl;
    return fill(arr,0,0,0,n);
    
}

int main(){

    vector<vector<int>> m = generateMatrix(5);

    for(int i=0; i<5;i++){
        for(int j=0; j<5; j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    } 
}