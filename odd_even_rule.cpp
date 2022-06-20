#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &A, int B, int C) {
    int fine=0;
    for(int i=0;i<A.size();i++){
        if(A[i]%2!=B%2){
            fine+=C;
        }
    }
    return fine;
}

int main(){
    

    return 0;
}