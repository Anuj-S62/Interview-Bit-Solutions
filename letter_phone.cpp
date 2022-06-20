#include<bits/stdc++.h>
using namespace std;

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
    
    vector<string> letterCombinations(string digits) {
        vector<string> st = {"0","1","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> par;
        for(int i = 0;i<digits.length();i++){
            int idx = digits[i]-'0';
            par.push_back(st[idx]);
        }
        vector<string> ans;
        if(digits.length()==0) return ans;
        string temp;
        comb(par,0,temp,ans);
        return ans;
        
    }

int main(){
    

    return 0;
}