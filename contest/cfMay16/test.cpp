#include<bits/stdc++.h>
using namespace std;

void sortSubarray(int arr[],int si, int ei){
    int l = ei-si;
    sort(arr, arr+l);
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

int main(){

    int arr[5] = {1,5,8,4,2};
    partSort(arr,5,1,4);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}