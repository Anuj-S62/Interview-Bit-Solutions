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
    show(ans);
    return ans;
}


int main(){
    vector<int> a;
    for(int i=100;i<=1000;i++){
        a.push_back(i);
    }
    solve(a,30,30);

    return 0;
}