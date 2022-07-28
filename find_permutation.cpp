#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<int> findPerm(const string A, int B) {
    int left = 1;
    int right = B;
    vector<int> ans;
    for(auto i:A){
        if(i=='I'){
            ans.push_back(left);
            left++;
        }
        else{
            ans.push_back(right);
            right--;
        }
    }
    ans.push_back(left);
    return ans;
}
 
int main(){
    
 
    return 0;
}