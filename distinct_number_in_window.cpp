#include<bits/stdc++.h>
using namespace std;

void show(vector<int> vec){
    for(auto i:vec) cout<<i<<", ";
    cout<<endl;
}

void disp_mp(unordered_map<int,int> mp){
    for(auto i:mp){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;
}

vector<int> dNums(vector<int> &A, int B) {
    vector<int> ans;
    if(B>A.size()) return ans;
    unordered_map<int,int> mp;
    for(int i = 0;i<B;i++) mp[A[i]]++;
    ans.push_back(mp.size());
    int x = 0;
    for(int i = B;i<A.size();i++){
        if(mp[A[x]]==1){
            auto it = mp.find(A[x]);
            mp.erase(it);
        }
        else mp[A[x]]--;
        mp[A[i]]++;
        ans.push_back(mp.size());
        x++;
    }
    return ans;
}

int main(){
    vector<int> vec = {1, 2, 1, 3, 4, 3};
    vector<int> ans = dNums(vec,3);

    return 0;
}