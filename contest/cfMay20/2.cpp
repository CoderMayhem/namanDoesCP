#include<bits/stdc++.h>
#include<math.h>

using namespace std;

// Function to reverse a string
void reverseStr(string& str)
{
    int n = str.length();
    
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

bool isPalindrome(string str){
    string rev = str;
    reverseStr(rev);
    if (rev == str){
        return true;
    }else{
        return false;
    }
}

void modifyString(string& str){

    int i = str.find('0');
    str.at(i) = '1';
}

void play(string str, int zeroes, char nextPlayer, int spentA, int spentB, bool revFlag){
    //base condition
    if(zeroes==0){
        if(spentA>spentB){
            cout<<"BOB"<<endl;
            return;
        }else if (spentA<spentB)
        {
            cout<<"ALICE"<<endl;
            return;
        }else
        {
            cout<<"DRAW"<<endl;
            return;
        }
    }

    if (isPalindrome(str)){
      
            if(nextPlayer == 'A'){
                modifyString(str);
                zeroes--;
                spentA++;
                play(str, zeroes, 'B', spentA, spentB, true);
            }else
            {
                zeroes--;
                spentB++;
                play(str, zeroes, 'A', spentA, spentB, true);
            }
        
    }else
    {
        if (!revFlag)
        {
             if (nextPlayer == 'A'){
                modifyString(str);
                zeroes--;
                spentA++;
                play(str, zeroes, 'B', spentA, spentB, true);
            }else{
                modifyString(str);
                zeroes--;
                spentB++;
                play(str, zeroes, 'A', spentA, spentB, true);
            }

        }else{

            if(nextPlayer == 'A'){
                reverseStr(str);
                play(str, zeroes, 'B', spentA, spentB, false);
            }else
            {
                reverseStr(str);
                play(str, zeroes, 'A', spentA, spentB, false);
            }
            
        }
        
    }   
}

int main(){

    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        string str;
        int zCount = 0;
        char ch = 'A';

        cin>>str;

        for (int i = 0; i < n; i++)
        {
            if (str.at(i)=='0')
            {
                zCount++;
            }
        }
        play(str,zCount,ch,0,0,true);
    }
}