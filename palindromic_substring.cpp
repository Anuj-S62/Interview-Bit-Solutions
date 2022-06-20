#include<bits/stdc++.h>
using namespace std;

int sub(string s,int l,int r){
    if(l<0 || r>=s.length()) return 0;
    if(s[l]==s[r]) return 1+sub(s,l-1,r+1);
    else return 0;
}

int solve(string A) {
    int count = 0;
    for(int i = 0;i<A.length();i++){
        count += sub(A,i,i);
        count += sub(A,i,i+1);
    }
    return count;
}

int main(){
    string s = "aaa";
    cout<<solve(s);
    // cout<<sub(s,3,3);
    return 0;
}