#include<bits/stdc++.h>
using namespace std;

void disp(vector<vector<int>> vec){
    for(int i = 0;i<vec.size();i++){
        for(int j = 0;j<vec[i].size();j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
}

int solve(vector<vector<int>> &arr,int i,int j){
    
    if(i==0 && j==0) return 1;
    if((i<0 || j<0) || (i==0 && arr[i][j-1]==1)|| (j==0 && arr[i-1][j]==1) || (i!=0 && j!=0 && arr[i-1][j-1]==1)) return 0;
    // if(dp[i][j]!=-1) return dp[i][j];
    if(i!=0 && j!=0 && arr[i-1][j]==1) return solve(arr,i,j-1);
    else if(j!=0 && i!=0 && arr[i][j-1]==1) return solve(arr,i-1,j);
    else return (solve(arr,i-1,j) + solve(arr,i,j-1));
}

int uniquePathsWithObstacles(vector<vector<int> > &A) {
    vector<int> temp(A.size()+10,-1);
    vector<vector<int>> dp(A[0].size()+10,temp);
    for(int i = 0;i<dp.size();i++) dp[i][0] = 1;
    for(int i = 0;i<dp[0].size();i++) dp[0][i] = 1;
    if(A[0][0]==1 || A[A.size()-1][A[0].size()-1]) return 0;
    return solve(A,A.size()-1,A[0].size()-1);
}

int solve(vector<vector<int>> &arr,int i,int j,vector<vector<int>> &dp){
    if(i==0 && j==0) return 1;
    if((i<0 || j<0) || (i==0 && arr[i][j-1]==1)|| (j==0 && arr[i-1][j]==1) || (i!=0 && j!=0 && arr[i-1][j-1]==1)) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    if(i!=0 && j!=0 && arr[i-1][j]==1) return dp[i][j] = solve(arr,i,j-1,dp);
    else if(j!=0 && i!=0 && arr[i][j-1]==1) return dp[i][j] = solve(arr,i-1,j,dp);
    return dp[i][j] = (solve(arr,i-1,j,dp) + solve(arr,i,j-1,dp));
}

int uniquePathsWithObstacles(vector<vector<int> > &A) {
    if(A.size()==1){
        for(int i = 0;i<A[0].size();i++){
            if(A[0][i]==1) return 0;
        }
        return 1;
    }
    if(A[0].size()==1){
        for(int i = 0;i<A.size();i++){
            if(A[i][0]==1) return 0;
        }
        return 1;
    }
    vector<int> temp(A.size()+10,-1);
    vector<vector<int>> dp(A[0].size()+10,temp);
    for(int i = 0;i<dp.size();i++) dp[i][0] = 1;
    for(int i = 0;i<dp[0].size();i++) dp[0][i] = 1;
    if(A[0][0]==1 || A[A.size()-1][A[0].size()-1]) return 0;
    return solve(A,A.size()-1,A[0].size()-1,dp);
}


int main(){
    // vector<vector<int>> arr = {{0},{0},{0}};
    // vector<vector<int>> arr = {{0,0,0},{0,0,0},{0,0,0}};
    // vector<vector<int>> arr = {{0,0},{0,0},{0,0},{1,0},{0,0}};
    vector<vector<int>> arr = {{0, 1, 1, 1},{1, 1, 1, 0}};
    cout<<uniquePathsWithObstacles(arr)<<endl;

    return 0;
}