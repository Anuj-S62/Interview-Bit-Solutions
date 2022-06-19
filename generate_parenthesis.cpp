#include<bits/stdc++.h>
using namespace std;

void show(vector<string> ans){
    for(auto i:ans) cout<<i<<endl;
}

void generate(int n,int count1,int count2,vector<string> &ans,string temp,int i){
    if(i==2*n){
        ans.push_back(temp);
        return;
    }
    if(count1<n) generate(n,count1+1,count2,ans,temp + '(',i+1);
    if(count2<count1) generate(n,count1,count2+1,ans,temp + ')',i+1);
}

int main(){
    int n = 2;
    string s;
    vector<string> ans;
    generate(n,0,0,ans,s,0);
    show(ans);
    return 0;
}