#include<bits/stdc++.h>
using namespace std;

int knapsack(vector<int> &val,vector<int> &wt,int weight,int x){
    if(weight==0 || x==0) return 0;
    if(weight>=wt[x-1]) return max(knapsack(val,wt,weight,x-1),(val[x-1]+knapsack(val,wt,weight-wt[x-1],x-1)));
    else return knapsack(val,wt,weight,x-1);
}

int solve(vector<int> &A, vector<int> &B, int C) {
    return knapsack(A,B,C,A.size());
}

int knapsack2(vector<int> weight,vector<int> value,int n,int w){
    if(n==0 || w==0)return 0;
    if(weight[n-1]<=w){
        return max((value[n-1]+knapsack2(weight,value,n-1,w-weight[n-1])),(knapsack2(weight,value,n-1,w)));
    }
    else{
        return knapsack2(weight,value,n-1,w);
    }
}

// void show(vector<vector<int>> arr){
//     for(int i = 0;i<arr.size();i++){
//         for (int j = 0;j<arr[i].size();j++) cout<<arr[i][j]<<" ";
//         cout<<endl;
//     }
// }

// int knapsack(vector<int> &val,vector<int> &wt,int weight,int x,vector<vector<int>> &dp){
//     if(weight<=0 || x<0) return dp[x][weight]=0;
//     if(dp[x][weight]>-1){
//         return dp[x][weight];
//     }
//     if(weight>=wt[x]) return dp[x][weight] = max(knapsack(val,wt,weight,x-1,dp),(val[x]+knapsack(val,wt,weight-wt[x],x-1,dp)));
//     else return dp[x][weight] =  knapsack(val,wt,weight,x-1,dp);
// }

// int solve(vector<int> &A, vector<int> &B, int C) {
//     vector<vector<int>> dp(1010,vector<int>(1010,-1));
//     knapsack(A,B,C,A.size()-1,dp);
//     show(dp);
//     return dp[A.size()-1][C];
// }


int main(){
    vector<int> val = { 468, 335, 501, 170, 725, 479, 359, 963, 465, 706, 146, 282, 828, 962, 492, 996, 943, 828, 437, 392, 605, 903, 154, 293, 383, 422, 717, 719, 896, 448, 727, 772, 539, 870, 913, 668, 300, 36, 895, 704, 812, 323};
    vector<int> wt = {4, 4, 5, 2, 2, 4, 9, 8, 5, 3, 8, 8, 10, 4, 2, 10, 9, 7, 6, 1, 3, 9, 7, 1, 3, 5, 9, 7, 6, 1, 10, 1, 1, 7, 2, 4, 9, 10, 4, 5, 5, 7};
    int c = 841;
    // 5057
    // vector<int> val = {60,100,120};
    // vector<int> wt = {10,20,30};
    // int c = 50;
    // cout<<solve(val,wt,c)<<endl;
    cout<<knapsack2(wt,val,wt.size(),c)<<endl;

    return 0;
}