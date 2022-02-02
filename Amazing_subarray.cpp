#include<bits/stdc++.h>
using namespace std;

int solve(string A) {
    int count=0;
    for(int i=0;i<A.length();i++){
        if(A[i]=='A' || A[i]=='E' || A[i]=='I' || A[i]=='O' || A[i]=='U' || A[i]=='a' || A[i]=='e' || A[i]=='i' || A[i]=='o' || A[i]=='u'){
            for(int j=i;j<A.length();j++){
                count++;
            }
        }
    }
    return count%10003;
}

int main(){
    

    return 0;
}