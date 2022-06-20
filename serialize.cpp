#include<bits/stdc++.h>
using namespace std;

string change(int n){
    string res="";

    while(n){
       char x=(n%10)+48;
       res=res+x;
       n=n/10; 
    }
    reverse(res.begin(),res.end());
    return res;
}
string serialize(vector<string> &A) {
    string res="";
    for(int i=0;i<A.size();i++){
        res += A[i];
        res += change(A[i].length());
        res += '~';
    }
    return res;
}


int main(){
    

    return 0;
}