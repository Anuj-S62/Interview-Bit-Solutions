#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &A) {
    int count = 0;
    unordered_set<int> st;
    for(int i=0;i<A.size();i++){
        if(st.find(A[i])==st.end()){
            st.insert(A[i]);
        }
        else{
            count++;
            st.erase(A[i]);
        }
    }
    return count;
}

int main(){
    

    return 0;
}