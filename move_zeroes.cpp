#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> &A) {
    vector<int> res;
    int count=0;
    for(int i=0;i<A.size();i++){
        if(A[i]==0) count++;
        else res.push_back(A[i]);
    }
    for(int i=0;i<count;i++){
        res.push_back(0);
    }
    return res;
}

int main(){
    

    return 0;
}