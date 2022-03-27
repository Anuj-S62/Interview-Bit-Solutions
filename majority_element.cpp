#include<bits/stdc++.h>
using namespace std;

int majorityElement(const vector<int> &A) {
    if(A.size() == 1) return A[0];
    float x = A.size()/2;
    unordered_map<int,int> mp;
    for(int i=0;i<A.size();i++){
        if(mp.find(A[i])!=mp.end()){
            mp[A[i]]++;
            if(mp[A[i]]>x) return A[i];
        }
        else mp[A[i]] = 1;
    }
    return 0;

}


int main(){
    

    return 0;
}