//Write a program to reverse an array or string

#include<iostream>
using namespace std;

void reverse(int arr[], int n){

    for (int i = 0; i < n; i++)
    {
        cout<<arr[n-i-1]<<" ";
    }
    
}

int main(){

    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    reverse(arr, n);
    
}