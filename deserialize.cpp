#include<bits/stdc++.h>
using namespace std;

vector<string> deserialize(string A) {
    vector<string> sol;
    string res = "";
    for(int i=0;i<A.length();i++){
        if(A[i]>=97 && A[i]<=122){
            res += A[i];
        }
        else if(res.size()) {
            sol.push_back(res);
            res.clear();
        }
    }
    return sol;
}


int main(){
    deserialize("ab6~cd2~");

    return 0;
}