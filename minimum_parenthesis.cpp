#include<bits/stdc++.h>
using namespace std;

int solve(string A) {
    int count=0;
    stack<char> stk;
    for(int i=0;i<A.length();i++){
        if(A[i]=='('){
            stk.push('(');
        }
        else if(A[i]==')'){
            if(stk.empty()){
                count++;
                continue;
            }
            stk.pop();
        }
    }
    while(!stk.empty()){
        stk.pop();
        count++;
    }
    return count;
}


int main(){
    cout<<solve(")(")<<endl;

    return 0;
}