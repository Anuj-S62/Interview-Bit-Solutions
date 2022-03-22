#include<bits/stdc++.h>
using namespace std;

void show(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

vector<int> solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    unordered_set<int> st_1;
    for(int i=0;i<A.size();i++){
        st_1.insert(A[i]);
    }
    unordered_set<int> st2;
    unordered_set<int> st3;
    vector<int> ans;
    for(int i=0;i<B.size();i++){
        if((st_1.find(B[i])!=st_1.end()) && (st2.find(B[i])==st2.end())){
            ans.push_back(B[i]);
            st2.insert(B[i]);
        }
        st3.insert(B[i]);
    }
    for(int i=0;i<C.size();i++){
        if((st_1.find(C[i])!=st_1.end()) && (st2.find(C[i])==st2.end())){
            ans.push_back(C[i]);
            st2.insert(C[i]);
        }
    }
    for(int i=0;i<C.size();i++){
        if((st3.find(C[i])!=st3.end()) && (st2.find(C[i])==st2.end())){
            ans.push_back(C[i]);
            st2.insert(C[i]);
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}


int main(){
    vector<int> a = {1,2};
    vector<int> b = {1,3};
    vector<int> c = {2,3};
    solve(a,b,c);

    return 0;
}