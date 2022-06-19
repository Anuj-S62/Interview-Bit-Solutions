#include<bits/stdc++.h>
using namespace std;

void disp(vector<int> arr){
    for(int i:arr) cout<<i<<" ";
    cout<<endl;
}

// vector<int> solve(vector<vector<int> > &A) {
//     vector<int> ans;
//     for(int i= 0;i<A.size();i++){
//         for(int j = 0;j<A[i].size();j++){
//             ans.push_back(A[i][j]);
//         }
//     }
//     sort(ans.begin(),ans.end());
//     return ans;
// }

vector<int> solve(vector<vector<int> > &A) {
    vector<int> ans;
    priority_queue<int> pq;
    for(int i = 0;i<A.size();i++){
        for(int j = 0;j<A[i].size();j++){
            pq.push(-1*A[i][j]);
        }
    }
    while(pq.size()){
        ans.push_back(-1*(pq.top()));
        pq.pop();
    }
    disp(ans);
    return ans;
}

int main(){
    vector<vector<int>> arr = {{1, 2, 3},{2, 4, 6},{0, 9, 10}};
    solve(arr);

    return 0;
}