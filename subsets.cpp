#include<bits/stdc++.h>
using namespace std;

void show(vector<vector<int>> arr){
    // sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        // cout<<"------------------------"<<endl;
    }
}

void sub(vector<int> &arr,vector<vector<int>> &ans,vector<int> &temp,int x){
    if(x == arr.size()){
        ans.push_back(temp);
        return;
    }
    for(int i = x;i<arr.size();i++){
        sub(arr,ans,temp,x+1);
        temp.push_back(arr[i]);
        sub(arr,ans,temp,x+1);
        temp.pop_back();
        return;
        
    }
    return;
}
    
vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> temp;
    sub(nums,ans,temp,0);
    return ans;
    
}

int main(){
    vector<int> arr = {15, 20, 12, 19, 4};
    show(subsets(arr));
    // subsets(arr);
    

    return 0;
}