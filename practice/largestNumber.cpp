#include<iostream>
#include<bits/stdc++.h>

using namespace std;


bool compare(string a, string b) {
            return a + b > b + a;
        }

string largestNumber(const vector<int> &A) {
            string result;
    vector<string> str;
    
    for(int i=0; i<A.size();i++){
        str.push_back(to_string(A[i]));
    }
    
    sort(str.begin(),str.end(), compare);
    
    for (int i = 0; i < str.size(); i++) {
                result += str[i];
    }

            // cout<<result<<endl; 
            return result;
            //int pos = 0;
            //while (result[pos] == '0' && pos + 1 < result.size()) pos++; 
            //return result.substr(pos);
        }

int main(){

    vector<int> A{3, 30, 34, 5, 9};
    cout<<largestNumber(A)<<endl;
}
