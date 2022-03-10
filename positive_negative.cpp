#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> &A) {
    vector<int> res = {0,0};
    for(int i=0;i<A.size();i++){
        if(A[i]>0) res[0]++;
        else if(A[i]<0) res[1]++;
    }
    return res;
}


int main(){
    

    return 0;
}