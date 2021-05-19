#include<bits/stdc++.h>
using namespace std;

void sortSubarray(int arr[],int si, int ei){
    int l = ei-si;
    sort(arr+si, arr+l);
}

int main(){

    int arr[5] = {1,5,8,4,2};
    sortSubarray(arr,1,4);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}