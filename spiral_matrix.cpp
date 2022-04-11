#include<bits/stdc++.h>
using namespace std;

void show(vector<vector<int>> arr){
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

vector<vector<int> > solve(vector<int> &A, int B, int C) {
    vector<vector<int>> ans;
    vector<int> temp;
    for(int i=0;i<C;i++){
        temp.push_back(0);
    }
    for(int i=0;i<B;i++){
        ans.push_back(temp);
    }
    int x = 0;
    int i=0;
    int j=0;
    while(x<A.size()){
        while(j<C && ans[i][j]==0){
            ans[i][j] = A[x];
            j++;
            x++;
        }
        if(x==A.size()-1) break;
        j--;
        i++;
        while(i<B && ans[i][j]==0){
            ans[i][j]=A[x];
            i++;
            x++;
        }
        i--;
        j--;
        while(j>=0 && ans[i][j]==0){
            ans[i][j] = A[x];
            j--;
            x++;
        }
        j++;
        i--;
        while(i>=0 && ans[i][j]==0){
            ans[i][j] = A[x];
            i--;
            x++;
        }
        i++;
        j++;
    }
    return ans;
}


int main(){
    vector<int> a = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    solve(a,5,4);

    return 0;
}