#include<bits/stdc++.h>
using namespace std;

int longestConsecutive(const vector<int> &A) {
    unordered_set<int> st;
    for(int i=0;i<A.size();i++){
        st.insert(A[i]);
    }
    int ans = 0;
    int temp = 1;
    ans = max(ans,temp);
    int x;
    unordered_set<int> ::iterator itr = st.begin();
    while(itr!=st.end()){
        // cout<<temp<<endl;
        x = *st.begin();
        if((st.find(x+1)!=st.end()) || (st.find(x-1)!=st.end())){
            temp++;
            ans = max(ans,temp);
        }
        else{
            temp = 1;
        }
        itr++;
    }
    return ans;
}

int main(){
    vector<int> arr = {100,4,200,1,3,2};
    cout<<longestConsecutive(arr)<<endl;

    return 0;
}