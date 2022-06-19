#include<bits/stdc++.h>
using namespace std;

void disp(vector<vector<int>> ans){
    for(int i = 0;i<ans.size();i++){
        for(int j = 0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

void solve(vector<int> &arr,vector<int> temp,vector<vector<int>> &ans,int sum,int x){
    if(sum==0){
        ans.push_back(temp);
        return;
    }
    if(x==arr.size()) return;
    if(arr[x]<=sum){
        temp.push_back(arr[x]);
        solve(arr,temp,ans,sum-arr[x],x);
        temp.pop_back();
        solve(arr,temp,ans,sum,x+1);
    }
    else{
        solve(arr,temp,ans,sum,x+1);
    }
}


vector<vector<int> > combinationSum(vector<int> &A, int B) {
    vector<int> arr;
    unordered_set<int> st;
    for(int i = 0;i<A.size();i++){
        if(st.find(A[i])==st.end()){
            arr.push_back(A[i]);
            st.insert(A[i]);
        }
    }
    sort(arr.begin(),arr.end());
    vector<int> temp;
    vector<vector<int>> ans;
    solve(arr,temp,ans,B,0);
    return ans;
}


int main(){
    vector<int> arr = {2, 3, 6, 7};
    vector<vector<int>> ans = combinationSum(arr,7);
    disp(ans);

    return 0;
}