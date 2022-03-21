#include<bits/stdc++.h>
using namespace std;

// int longestConsecutive(const vector<int> &A) {
//     vector<int> a = A;
//     sort(a.begin(),a.end());
//     int ans = 0;
//     int temp = 1;
//     for(int i=1;i<a.size();i++){
//         if(a[i]==a[i-1])continue;
//         if(a[i] == a[i-1] + 1) temp++;
//         else temp = 1;
//         ans = max(ans,temp);
//     }
//     ans = max(ans,temp);
//     return ans;
// }

int longestConsecutive(const vector<int> &A) {
    unordered_set<int> st;
    for(int i=0;i<A.size();i++){
        st.insert(A[i]);
    }
    int length = 0;
    int temp = 1;
    int x;
    for(int i=0;i<A.size();i++){
        x = A[i] + 1;
        while(st.find(x)!=st.end()){
            st.erase(x);
            temp++;
            x = x + 1;
        }
        x = A[i] - 1;
        while(st.find(x)!=st.end()){
            st.erase(x);
            temp++;
            x = x-1;
        }
        length = max(length,temp);
        temp = 1;
    }
    return length;
}

int main(){
    vector<int> arr = {100,4,200,2};
    cout<<longestConsecutive(arr)<<endl;

    return 0;
}