#include<iostream>
#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n);
void partSort(int arr[], int N, int l, int r);
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
                partSort(arr,n, j,n-i);
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

void partSort(int arr[], int N, int l, int r)
{
    // Temporary array
    int temp[r - l + 1];
    int j = 0;
    for (int i = l; i <= r; i++) {
        temp[j] = arr[i];
        j++;
    }

    // Sort the temporary array
    sort(temp, temp + r - l + 1);
 
    // Modifying original array with
    // temporary array elements
    j = 0;
    for (int i = l; i <= r; i++) {
            arr[i] = temp[j];
            j++;
    }
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