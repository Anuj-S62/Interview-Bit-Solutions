#include<bits/stdc++.h>
using namespace std;

void disp(vector<vector<int>> arr){
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

vector<vector<int> > solve(int A) {
    if(A==0){
        vector<vector<int>> arr={};
        return arr;
    }
    if(A==1){
        vector<vector<int>> arr={{1}};
        return arr;
    }
    vector<vector<int>> arr={{1},{1,1}};
    if(A==2) return arr;
    for(int i=1;i<A;i++){
        vector<int> temp={1};
        for(int j=0;j<i;j++){
            int sum=arr[i][j]+arr[i][j+1];
            temp.push_back(sum);
        }
        temp.push_back(1);
        arr.push_back(temp);
        temp.clear();
    }
    arr.pop_back();
    return arr;
}

int main(){
    vector<vector<int>> arr = solve(5);
    disp(arr);

    return 0;
}