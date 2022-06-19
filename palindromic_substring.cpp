#include<bits/stdc++.h>
using namespace std;

bool isPlain(string s,int l,int h){
    if(l==h-1 || l==h) return true;
    if(s[l]!=s[h]) return false;
    return isPlain(s,l+1,h-1);
}

void sub(string s,int &count,int l,int h){
    if(isPlain(s,l,h)){
        count += 
    }
}

int solve(string A) {
}


int main(){
    string s = "aba";
    cout<<isPlain(s,0,2)<<endl;

    return 0;
}