#include<bits/stdc++.h>
using namespace std;

int solve(string A) {
    stack<char> stk;
    for(int i=0;i<A.length();i++){
        if(A[i]=='('){
            stk.push(A[i]);
        }
        else if(A[i]==')'){
            if(stk.empty()){
                return 0;
            }
            stk.pop();
        }
    }
    if(stk.empty()){
        return 1;
    }
    return 0;
}

int main(){
    

    return 0;
}