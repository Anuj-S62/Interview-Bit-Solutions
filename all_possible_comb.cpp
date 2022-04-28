#include<bits/stdc++.h>
using namespace std;


void show(vector<string> arr){
    for(int i = 0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
}

void comb(vector<string> &A,int x,string &temp,vector<string> &ans){
    if(x==A.size()){
        ans.push_back(temp);
        return;
    }
    for(int i = 0;i<A[x].size();i++){
        temp.push_back(A[x][i]);
        comb(A,x+1,temp,ans);
        temp.pop_back();
    }
}

vector<string> specialStrings(vector<string> &A) {
    vector<string> ans;
    string temp = "";
    comb(A,0,temp,ans);
    return ans;

}

int main(){
    vector<string> arr = {"abc","defg"};
    vector<string> ans;
    string temp = "";
    comb(arr,0,temp,ans);
    show(ans);

    return 0;
}