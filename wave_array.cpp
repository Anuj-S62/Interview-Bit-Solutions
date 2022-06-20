#include<bits/stdc++.h>
using namespace std;

vector<int> Swave(vector<int> &A) {
    if(A.size()==1){
        return A;
    }
    sort(A.begin(),A.end());
    vector<int> res;
    int x=0;
    int y=1;
    for(int i=0;i<A.size()/2;i++){
        res.push_back(A[y]);
        res.push_back(A[x]);
        x=x+2;
        y=y+2;
    }
    if(A.size()%2==1){
        res.push_back(A[x]);
    }
    return res;
}


int main(){
    

    return 0;
}