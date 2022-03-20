#include<bits/stdc++.h>
using namespace std;

int diffPossible(const vector<int> &A, int B) {
    unordered_set<int> st;
    if(B==0){
        for(int i=0;i<A.size();i++){
            if(st.find(A[i])!=st.end()) return 1;
            st.insert(A[i]);
        }
    }
    if(B==0) return 0;
    for(int i=0;i<A.size();i++){
        st.insert(A[i]);
    }
    for(int i=0;i<A.size();i++){
        if(st.find(A[i] + B)!=st.end()) return 1;
        if(st.find(A[i] - B)!=st.end()) return 1;
    }
    return 0;
}


int main(){
    

    return 0;
}