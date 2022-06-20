#include<bits/stdc++.h>
using namespace std;

int solve(vector<string> &A) {
    unordered_set<char> st;
    char a = 'a';
    int x = 1;
    for(int i=0;i<26;i++){
        st.insert(a);
        a  = a + x;
    }
    for(int i=0;i<A.size();i++){
        for(int j=0;j<A[i].size();j++){
            if(st.find(A[i][j])!=st.end()){
                st.erase(A[i][j]);
            }
        }
    }
    if(!st.size()) return 1;
    return 0;
}



int main(){
    vector<string> arr = { "The", "quick", "brown", "fox", "jumps", "over", "the", "lazy", "dog"};
    cout<<solve(arr)<<endl;

    return 0;
}