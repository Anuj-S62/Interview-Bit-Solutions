#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> &A, int B) {
    sort(A.begin(),A.end());
    vector<int> ans;
    int x = A.size()-1;
    for(int i = 0;i<B;i++){
        ans.push_back(A[x]);
        x--;
    }
    return ans;
}


int main(){
    

    return 0;
}