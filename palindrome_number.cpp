#include<bits/stdc++.h>
using namespace std;

int isPalindrome(int A) {
    if(A<0){
        return 0;
    }
    vector<int> arr;
    while(A!=0){
        arr.push_back(A%10);
        A=A/10;
    }
    for(int i=0;i<arr.size()/2;i++){
        if(arr[i]!=arr[arr.size()-1-i]){
            return 0;
        }
    }
    return 1;
}


int main(){
    

    return 0;
}