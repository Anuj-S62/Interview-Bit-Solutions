#include<bits/stdc++.h>
using namespace std;

void disp(vector<vector<int>> arr){
    cout<<"-------------------"<<endl;
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"---------------------"<<endl;
}

void setZeroes(vector<vector<int> > &A) {
    unordered_set<int> row;
    unordered_set<int> col;
    for(int i=0;i<A.size();i++){
        for(int j=0;j<A[i].size();j++){
            if(A[i][j]==0){
                row.insert(i);
                col.insert(j);
            }
        }
    }
    int x=row.size();
    for(int i=0;i<x;i++){
        for(int j=0;j<A[0].size();j++){
            A[*row.begin()][j]=0;
        }
        row.erase(row.begin());
    }
    x=col.size();
    for(int i=0;i<x;i++){
        for(int j=0;j<A.size();j++){
            A[j][*col.begin()]=0;
        }
        col.erase(col.begin());
    }
}


int main(){
    vector<vector<int>> arr={{0,0},{1,1}};
    setZeroes(arr);
    disp(arr);

    return 0;
}