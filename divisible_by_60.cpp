#include<bits/stdc++.h>
using namespace std;

int divisibleBy60(vector<int> &A) {
    if(A.size()==1 && A[0]==0)return 1;
    int temp=0,a=0;
    for(int i=0;i<A.size();i++){
        if(A[i]==0)temp++;
    }
    if(temp==0)return 0;
    temp=0;
    for(int i=0;i<A.size();i++){
        temp=temp+A[i];
        if(A[i]%2==0)a++;
    }
    if(temp%3!=0) return 0;
    if(a>=2)return 1;
    return 0;
}

int main(){
    

    return 0;
}