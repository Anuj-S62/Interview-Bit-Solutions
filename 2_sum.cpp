#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(const vector<int> &A, int B) {
    vector<int> res;
    unordered_map<int,int> mp;
    for(int i=0;i<A.size();i++){
        if(mp.find(B-A[i])!=mp.end()){
            res.push_back(mp[B-A[i]]);
            res.push_back(i);
            return res;
        }
        else if(mp.find(A[i])==mp.end()){
            mp[A[i]] = i;
        }
    }
    return res;

}

int main(){
    vector<int> arr = {2,7,11,15};
    int x = 9;
    vector<int> ans = twoSum(arr,x);
    for(auto i:ans) cout<<i<<" ";
    cout<<endl;

    return 0;
}