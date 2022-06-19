#include<bits/stdc++.h>
using namespace std;

void show(vector<vector<int>> arr){
    for(int i = 0;i<arr.size();i++){
        for(int j = 0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void disp(vector<int> &arr){
    for(auto i: arr) cout<<i<<" ";
    cout<<endl;
}

void swap(vector<int> &num,int a,int b){
        int x = num[a];
        num[a] = num[b];
        num[b] = x;
    }
    void permute(vector<vector<int>> &ans,vector<int> &arr,int l,int r){
        if(l==r){
            ans.push_back(arr);
            // show(ans);
            return ;
        }
        for(int i = l;i<=r;i++){
            swap(arr,i,l);
            permute(ans,arr,l+1,r);
            swap(arr,i,l);
        }
    }
vector<int> findPerm(int A, long B) {
    vector<int> arr;
    for(int i = 1;i<=A;i++) arr.push_back(i);
    vector<vector<int>> ans;
    permute(ans,arr,0,A-1);
    show(ans);
    arr = ans[B-1];
    for(auto i:arr) cout<<i<<" ";
    return arr;
}


int main(){
    // findPerm(11,28);
    vector<int> arr = {1,2,3,4,5};
    vector<vector<int>> ans;
    permute(ans,arr,0,4);
    show(ans);
    return 0;
}