#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// int find(vector<vector<int>> &arr,int i,int j){
//     if(i<0 || j<0) return -1;
//     if(i==0 && j==0) return 0;
//     if(i==0 && arr[i][j]>arr[i][j-1]) return 1 + find(arr,i,j-1);
//     else if(i==0 && arr[i][j]<=arr[i][j-1]) return -1;
//     if(j==0 && arr[i][j]>arr[i-1][j]) return 1 + find(arr,i-1,j);
//     if(arr[i-1][j]>=arr[i][j] && arr[i][j-1]>=arr[i][j]) return -1;
//     if(arr[i-1][j]<arr[i][j] && arr[i][j-1]>=arr[i][j]) return 1 + find(arr,i-1,j);
//     if(arr[i-1][j]>=arr[i][j] && arr[i][j-1]<arr[i][j]) return 1 + find(arr,i,j-1);
//     return 1 + max(find(arr,i-1,j),find(arr,i,j-1));
// }

int dp[1009][1009];
int solve(vector < vector < int > > & A) {
  int n = A.size();
  int m = A[0].size();
  assert(n>=1 && n<=1000 && m>=1 && m<=1000);
  for(auto a:A) 
    for(auto b:a)
        assert(b>=1 && b<=100000000);
  memset(dp, 0, sizeof(dp));
  dp[0][0] = 1;
//   for(int i = 0;i<1009;i++){
//     for(int j = 0;j<1009;j++){
//         cout<<dp[i][j]<<" ";
//     }
//     cout<<endl;
//   }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (i == 0 && j == 0)
        continue;
      int top = ((i == 0) ||    (A[i - 1][j] >= A[i][j]) || dp[i-1][j]==0) ? 0 : dp[i - 1][j] + 1;
      int left = ((j == 0) || (A[i][j - 1] >= A[i][j]) || dp[i][j-1]==0) ? 0 : dp[i][j - 1] + 1;
      dp[i][j] = max(top, left);
    }
  }
  if (dp[n - 1][m - 1] == 0) return -1;
  return dp[n - 1][m - 1];
}

 
int main(){
    // vector<vector<int>> arr = {{1,2},{3,4}};
//     vector<vector<int>> arr = {{1, 2, 3, 4}
//         ,{2, 2, 3, 4}
//         ,{3, 2, 3, 4}
//         ,{4, 5, 6, 7}
// };
// vector<vector<int>> arr = {
//   {35, 1, 70, 25, 79, 59, 63, 65}
//   ,{6, 46, 82, 28, 62, 92, 96, 43}
// };
vector<vector<int>> arr = {
  {63, 56, 11, 60, 25, 38, 49, 84, 96, 42, 3, 51}
};
    // cout<<find(arr,3,3);
    cout<<solve(arr)<<endl;
    return 0;
}