#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> &A) {
    int count = 0;
    vector<int> res;
    for(int i=0;i<A.size();i++){
        if(A[i]==0) count++;
    }
    for(int i=0;i<A.size();i++){
        if(A[i]!=0) res.push_back(A[i]);
    }
    while(count){
        res.push_back(0);
        count--;
    }
    return res;

}


int main(){
    

    return 0;
}