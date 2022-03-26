#include<bits/stdc++.h>
using namespace std;

void disp(vector<vector<int>> A){
    cout<<A.size()<<endl;
    for(int i= 0;i<A.size();i++){
        for(int j=0;j<A[i].size();j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}

vector<vector<int> > anagrams(const vector<string> &A) {
    unordered_map<string ,int> mp;
    vector<vector<int>> res;
    int x = 0;
    for(int i=0;i<A.size();i++){
        string s = A[i]; 
        sort(s.begin(),s.end());
        if(mp.find(s)==mp.end()){
            vector<int> vec;
            vec.push_back(i+1);
            res.push_back(vec);
            mp[s] = x;
            x++;
            continue;
        }
        res[mp[s]].push_back(i+1);
    }
    return res;

}

int main(){
    vector<string>  s = {"cat", "dog", "god", "tca"};
    disp(anagrams(s));

    return 0;
}