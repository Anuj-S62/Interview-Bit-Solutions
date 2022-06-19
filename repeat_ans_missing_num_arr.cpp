#include<bits/stdc++.h>
using namespace std;

vector<int> repeatedNumber(const vector<int> &A) {
    int a;
    unordered_set<int> st;
    for(int i:A){
        if(st.find(i)!=st.end()) a = i;
        st.insert(i);
    }
    int b;
    for(int i = 1;i<=A.size();i++){
        if(st.find(i)==st.end()){
            b = i;
            break;
        } 
    }
    vector<int> ans = {a,b};
    return ans;
}

int main(){
    

    return 0;
}