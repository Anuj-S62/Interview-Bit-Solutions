#include<bits/stdc++.h>
using namespace std;

void show(vector<int> arr){
    // cout<<arr.size();
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

vector<int> solve(string A) {
    vector<int> temp;
    for(int i=0;i<26;i++){
        temp.push_back(0);
    }
    for(int i=0;i<A.length();i++){
        int idx=A[i]-97;
        temp[idx]++;
    }
    vector<int> freq;
    for(int i=0;i<A.length();i++){
        int idx=A[i]-97;
        if(temp[idx]) freq.push_back(temp[idx]);
        temp[idx]=0;
    }
    return freq;
}

int main(){
    solve("interviewbit");

    return 0;
}