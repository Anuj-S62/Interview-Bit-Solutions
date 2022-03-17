#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &A) {
    int ans = -1;
    int min_idx = INT_MAX;
    unordered_map<int,int> mp;
    for(int i=0;i<A.size();i++){
        if(mp.find(A[i])==mp.end()){
            mp[A[i]] = i;
        }
        else{
            if(min_idx > mp[A[i]]){
                ans = A[i];
                min_idx = mp[A[i]];
            }
        }
    }
    return ans;
}


int main(){
    

    return 0;
}