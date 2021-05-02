#include<iostream>
using namespace std;

int main(){
    int row;
    int height;
    cin>>row;
    cin>>height;
    for(int i=0; i<height; i++){
        if(i==0 || i==height-1){
            for(int j=0; j<row; j++){
                cout<<"*";
            }
            cout<<endl;
        } else
        {
            for(int j=0; j<row;j++){
                j==0||j==row-1 ? cout<<"*" : cout<<" ";
            }
            cout<<endl;
        }
        
    }
    return 0;
}