#include<iostream>
using namespace std;

long int getSumEven(long int arr[], long int startIndex, long int countLength, long long int sum, bool isLeft, long int end){
    //base condition
    if(startIndex<0 || startIndex == end){
        return sum;
    }

    if(isLeft){
        long int k = arr[startIndex+1]-arr[startIndex]-1;
        sum += k*(countLength);
        return getSumEven(arr, startIndex-1,countLength-1,sum, true, end);
    }

    if(!isLeft){
        long int k = arr[startIndex+1]-arr[startIndex]-1;
        sum += k*(countLength);
        return getSumEven(arr, startIndex+1,countLength-1,sum, false, end);
    } 
}

long int getSumOdd(long int arr[], long int startIndex, long int countLength, long long int sum, bool isLeft, long int end){
    //base condition
    if(startIndex == 0 || startIndex== end){
        return sum;
    }

    if(isLeft){
        long int k = arr[startIndex]-arr[startIndex-1]-1;
        sum += k*(countLength);
        return getSumOdd(arr, startIndex-1,countLength-1,sum, true, end);
    }

    if (!isLeft){
        long int k = arr[startIndex+1]-arr[startIndex]-1;
        sum += k*(countLength);
        return getSumOdd(arr,startIndex+1,countLength-1,sum,false,end);
    }
}


int main(){

    long int t;
    cin>>t;

    while (t--)
    {
        long int n;
        cin>>n;
        
        char arr[n];
        long int count =0;

        for (long int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(arr[i] == '*')
                count++;
        }

        long int pos[count];
        long int posIndex = 0;
        
        for (long int i = 0; i < n; i++)
        {
            if (arr[i]=='*')
            {
                pos[posIndex] = i;
                if(i!=n-1){
                    posIndex++;
                }
            }
        }

        if(count%2==0){
            if(count == 0){
                cout<<0<<endl;
            }else{
                long int c = (count/2)-1;
                long int x = (count/2);
                long long int leftSumEven = getSumEven(pos,c,x,0, true, posIndex);
                long long int rightSumEven = getSumEven(pos,c+1,x-1,0, false, posIndex);
                cout<<leftSumEven+rightSumEven<<endl;
            }
            
        }else{
            if(count == 1){
                cout<<0<<endl;
            }else{
                long int c = (count-1)/2;
                long int x = (count-1)/2;
                long long int leftSumOdd = getSumOdd(pos,c,x,0,true,posIndex);
                long long int rightSumOdd = getSumOdd(pos,c,x,0,false,posIndex);
                cout<<leftSumOdd+rightSumOdd<<endl;
            }
        }
    }
}