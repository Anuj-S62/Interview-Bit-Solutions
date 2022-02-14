#include<bits/stdc++.h>
using namespace std;

int isPalindrome(string A) {
    vector<int> arr;
    for(int i=0;i<A.size();i++){
        int x=A[i];
        if(x>=97 && x<=122)arr.push_back(x);
        else if(x>=65 && x<=90)arr.push_back(x+32);
        else if(x>=48 && x<=57)arr.push_back(x-48);
    }
    for(int i=0;i<arr.size()/2;i++){
        if(arr[i]!=arr[arr.size()-1-i]) return 0;
    }
    return 1;
}


int main(){
    

    return 0;
}