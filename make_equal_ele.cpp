#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &A, int B) {
    for(int i=0;i<A.size()-1;i++){
        if((A[i]-A[i+1]==B) || (A[i]-A[i+1]==(-1)*B) || (A[i]-A[i+1]==0) || ((A[i]-A[i+1])/2==B) || ((A[i]-A[i+1])/2==-1*B)){
            continue;
        }
        return 0;
    }
    return 1;
}

int main(){
    

    return 0;
}