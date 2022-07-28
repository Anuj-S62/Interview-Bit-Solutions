#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
string solve(string A) {
    queue<char> que;
    que.push(A[0]);
    string ans;
    ans.push_back(A[0]);
    unordered_map<char,int> mp;
    mp[A[0]] = 1;
    for(int i = 1;i<A.length();i++){
        mp[A[i]]++;
        if(!que.size() && mp[A[i]]==1){
            ans.push_back(A[i]);
            que.push(A[i]);
            continue;
        }
        if(que.size() && A[i]!=que.front()){
            ans.push_back(que.front());
            que.push(A[i]);
        }
        else if(que.size() && A[i]==que.front()){
            que.pop();
            if(que.size()){
                while(que.size() && mp[que.front()]>1) que.pop();
                if(que.size()) ans.push_back(que.front());
                else ans.push_back('#');
            }
            else ans.push_back('#');
        }
        else ans.push_back('#');
    }
    return ans;
}


int main(){
    string a = "jyhrcwuengcbnuchctluxjgtxqtfvrebveewgasluuwooupcyxwgl";
    // string a = "aaik";
    // string a = "abcba";
    cout<<solve(a)<<endl;
    // jjjjjjjjjjjjjjjjjjjjjyyyyyyyyyyyyyyyyyyyyyyyyyyyqqqqq
    return 0;
}