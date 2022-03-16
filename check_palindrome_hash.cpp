#include<bits/stdc++.h>
using namespace std;

int solve(string A) {
    unordered_set<char> st;
    for(int i=0;i<A.length();i++){
        if(st.find(A[i])==st.end()){
            st.insert(A[i]);
        }
        else st.erase(A[i]);
    }
    if(st.size() == 0 || st.size() == 1) return 1;
    return 0;
}


int main(){
    

    return 0;
}