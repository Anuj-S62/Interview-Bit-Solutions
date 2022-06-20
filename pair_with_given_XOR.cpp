#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &A, int B) {
    unordered_set<int> st;
    int x = 0;
    for(int i=0;i<A.size();i++){
        if(st.find(A[i]^B)!=st.end()){
            x++;
        }
        st.insert(A[i]);
    }
    return x;
}


int main(){
    

    return 0;
}