#include<bits/stdc++.h>
#include <chrono>
using namespace std;

void show(vector<vector<int>> arr){
    // sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

// void subset(vector<int>& vec,int j,vector<vector<int>> &res,vector<int> &node){

//     res.push_back(node);
//     for (int i = j; i < vec.size(); i++){
//         node.push_back(vec[i]);
//         subset(vec,i+1,res,node);
//         node.pop_back();        
//     }
//         // show(res);
//     return;
// }
// vector<vector<int> > subsets(vector<int> &A) {
//     vector<vector<int>> res;
//     vector<int> node;
//     sort(A.begin(),A.end());
    
//     subset(A,0,res,node);
//     return res;
// }

void sub(vector<int> &arr,vector<vector<int>> &ans,vector<int> &temp,int x){
    if(x == arr.size()){
        ans.push_back(temp);
        return;
    }
    temp.push_back(arr[x]);
    sub(arr,ans,temp,x+1);
    temp.pop_back();
    sub(arr,ans,temp,x+1);
    return;
}
    
vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> temp;
    sub(nums,ans,temp,0);
    return ans;
    
}

int main(){
    // int t = 1000000;
    // float sum = 0;
    // while(t--){
    //     auto begin = std::chrono::high_resolution_clock::now();
    vector<int> arr = {1,2,3};
    // show(subsets(arr));
    vector<vector<int>> ans = subsets(arr);
    show(ans);
    // cout<<"helo"<<endl;
    // auto end = std::chrono::high_resolution_clock::now();
    // auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    // // subsets(arr);
    // printf("Time measured: %.3f seconds.\n", elapsed.count() * 1e-9);
    // sum += elapsed.count() * 1e-9;
    // }
    // cout<<sum/100<<endl;
    

    return 0;
}