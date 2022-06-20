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

void comb(vector<vector<int>> &ans,vector<int> &temp,int x,int n,int k){
            // cout<<"helo"<<endl;
    for(int i = x;i<=n+1;i++){
        if(temp.size()==k){
            ans.push_back(temp);
            // show(ans);
            return;
        }
        else if(temp.size()<k){
            temp.push_back(i);
            comb(ans,temp,i+1,n,k);
        }
        temp.pop_back();
    }
}

vector<vector<int> > combine(int A, int B) {
    vector<vector<int>> ans;
    vector<int> temp;
    comb(ans,temp,1,A,B);
    show(ans);
    return ans;
}


int main(){
    combine(7,3);

    return 0;
}