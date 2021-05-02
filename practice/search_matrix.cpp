#include<iostream>
using namespace std;

int main(){
    int n,m; 
    cin>>n>>m;
    int target;
    cin>>target;
    int mat[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>> mat[i][j];
        }
    }

    bool flag = false;
    int row=0;
    int col=m-1;
    while(row<n && col>=0){
        
            int current = mat[row][col];
            if(target>current){
                row++;
            } else if(target < current){
                col--;
            } else if(target == current){
                flag = true;
                break;
            }
        
    }

    if(flag){
        cout<<"FOUND"<<endl;
    } else{
        cout<<"NOT FOUND"<<endl;
    }
}