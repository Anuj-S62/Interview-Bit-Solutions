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

string con(int n){
    string res;
    while(n){
        char x = n%10 + '0';
        res.push_back(x);
        n = n/10;
    }
    reverse(res.begin(),res.end());
    return res;
}

string convert(vector<int> arr){
    string res;
    for(int i=0;i<arr.size();i++){
        res += con(arr[i]);
    }
    return res;
}

void sub(vector<int> &arr,vector<vector<int>> &ans,vector<int> &temp,int x,unordered_set<string> &st){
    if(x == arr.size()){
        string x = convert(temp);
        if(st.find(x)==st.end()){
            ans.push_back(temp);
            st.insert(x);
        }
        
        return;
    }
    sub(arr,ans,temp,x+1,st);
    temp.push_back(arr[x]);
    sub(arr,ans,temp,x+1,st);
    temp.pop_back();
    return;
}
vector<vector<int> > subsetsWithDup(vector<int> &A) {
    // vector<int> arr = {1,2,2};
    vector<vector<int>> ans;
    vector<int> temp;
    sort(A.begin(),A.end());
    unordered_set<string> st;
    sub(A,ans,temp,0,st);
    sort(ans.begin(),ans.end());
    // show(ans);  
    return ans;
}

int main(){
    vector<int> arr = {1,2,2};
    vector<vector<int>> ans;
    vector<int> temp;
    unordered_set<string> st;
    sub(arr,ans,temp,0,st);
    sort(ans.begin(),ans.end());
    show(ans);    

    return 0;
}