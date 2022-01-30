#include<bits/stdc++.h>
using namespace std;

void display(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

vector<int> getRow(int A) {
       vector<vector<int>> arr={{1},{1,1}};
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
    vector<int> res=arr[A];
    return res;
}

int main(){
    vector<int> arr=getRow(6);
    display(arr);
    return 0;
}