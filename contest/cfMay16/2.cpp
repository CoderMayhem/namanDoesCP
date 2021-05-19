#include<iostream>
#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n);
void sortSubarray(int arr[],int si, int ei);
int minSteps(int arr[], int n, int steps);

int minSteps(int arr[], int n, int steps){

    //base condition
    if(isSorted(arr,n)){
        return steps;
    }

    bool flag = false;

    for(int i =0; i<n; i++){
        for (int j = 0; j < n-i; j++)
        {
            if(arr[j]<arr[n-i]){
                continue;
            }else{
                sortSubarray(arr, j, n-i);
                steps++;
                return minSteps(arr,n,steps);
                flag = true;
                break;
            }   
        }
        if(flag)
            break;
    }
}

void sortSubarray(int arr[],int si, int ei){
    int l = ei-si;
    sort(arr+si, arr+l);
}

bool isSorted(int arr[], int n){
    for(int i=1; i<n; i++){
        if(arr[i]>=arr[i-1]){
            continue;
        }else{
            return false;
        }
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    
    while (t--)
    {
        int n;
        cin>>n;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        cout<<minSteps(arr,n,0)<<endl;
    }
    
}