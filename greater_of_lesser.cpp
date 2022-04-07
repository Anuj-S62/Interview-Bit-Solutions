#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &A, vector<int> &B, int C) {
    int a=0;
    int b=0;
    for(int i=0;i<A.size();i++){
        if(A[i]>C) a++;
    }
    for(int i=0;i<B.size();i++){
        if(B[i]<C) b++;
    }
    return max(a,b);
}


int main(){
    

    return 0;
}