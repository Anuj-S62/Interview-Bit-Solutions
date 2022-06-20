#include<bits/stdc++.h>
using namespace std;

void disp(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

vector<int> solve(string A) {
    unordered_map<char ,int> mp;
    for(int i=0;i<A.length();i++){
        if(mp.find(A[i])!=mp.end()) mp[A[i]]++;
        else mp[A[i]] = 1;
    }
    vector<int> arr;
    char x = 'a';
    for(int i=0;i<26;i++){
        if(mp.find(x)!=mp.end()){
            arr.push_back(mp[x]);
        }
        else arr.push_back(0);
        x++;
    }
    return arr;
}


int main(){
    solve("anuj");

    return 0;
}