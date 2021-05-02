#include<iostream>
using namespace std;

int firstocc(int arr[], int n, int i, int key){

    if(i==n){       //base consition
        return -1;
    }

    if(arr[i]==key){
        return i;
    }
    
    int restArray = firstocc(arr, n, i+1, key); 
    return restArray;
}

int lastocc(int arr[], int n, int i, int key){
    
    if(i==n){       //base consition
        return -1;
    }

    int restArray = lastocc(arr, n, i+1, key);

    if(restArray!=-1){
        return restArray;
    }

    if(arr[i] == key){
        return i;
    }

    return -1;

}

int main(){

    int myArr[] = {4,3,3,2,4,1,5,3};
    cout<<firstocc(myArr, 8, 0, 3)<<endl;
    cout<<lastocc(myArr, 8, 0, 3)<<endl;

}