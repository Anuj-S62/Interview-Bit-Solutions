#include<bits/stdc++.h>
using namespace std;

int sub(vector<int> &arr,int i,int y){
    if(i==arr.size()){
        return 0;
    }
    if(arr[i] > y){
        // cout<<"helo"<<endl;
        return max((1+sub(arr,i+1,arr[i])),sub(arr,i+1,y));
    }
    else return sub(arr,i+1,arr[i]); 
    // return 0;  
}

int main(){
    vector<vector<int>> dp(4);
    for(int i = 0;i<dp.size();i++){
        vector<int> temp(3,-1);
        dp[i] = temp;
    }
    // for(int i = 0;i<dp.size();i++){
    //     for(int j = 0;j<dp[i].size();j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    vector<int> arr = {69, 54, 19, 51, 16, 54, 64, 89, 72, 40, 31, 43, 1, 11, 82, 65, 75, 67, 25, 98, 31, 77, 55, 88, 85, 76, 35, 101, 44, 74, 29, 94, 72, 39, 20, 24, 23, 66, 16, 95, 5, 17, 54, 89, 93, 10, 7, 88, 68, 10, 11, 22, 25, 50, 18, 59, 79, 87, 7, 49, 26, 96, 27, 19, 67, 35, 50, 10, 6, 48, 38, 28, 66, 94, 60, 27, 76, 4, 43, 66, 14, 8, 78, 72, 21, 56, 34, 90, 89};
    // vector<int> arr = {1,8,2,3,4,5,45,16};
    // vector<int> arr = {84, 80, 27};
    int count = 1;
    int x = 0;
    cout<<sub(arr,0,0)<<endl;
    // cout<<count<<endl;

    return 0;
}