#include<bits/stdc++.h>
using namespace std;

int solve(int A) {
    int count  = 0;
    vector<int> squares;
    unordered_set<int> st;
    for(int i=1;i<=A;i++){
        squares.push_back(i*i);
        st.insert(i*i);
    }
    for(int i=0;i<squares.size();i++){
        for(int j = i+1;j<squares.size();j++){
            if(st.find(squares[i] + squares[j])!=st.end()) count++;
        }
    }
    return count;
}


int main(){
    

    return 0;
}