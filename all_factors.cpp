#include<bits/stdc++.h>
using namespace std;

vector<int> allFactors(int A) {
    vector<int> ans;
    for(int i=1;i<=sqrt(A);i++){
        if(A%i==0){
            if(A/i==i) ans.push_back(i);
            else{
                ans.push_back(i);
                ans.push_back(A/i);
            }
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}


int main(){
    

    return 0;
}