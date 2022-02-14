#include<bits/stdc++.h>
using namespace std;

string solve(string A, int B) {
    int n = A.size();
    int count = 1;
    char a = A[0];
    string ans;
    int i = 1;
    while(i<n){
        if(A[i]==a) count++;
        else{
            if(count!=B){
                while(count--) ans += a;
            }
            count = 1;
            a = A[i];
        }
        i++;
    }
    if(count!=B){
        while(count--) ans += a;
    }
    return ans;
}

int main(){
    cout<<solve("aabbccd",2)<<endl;

    return 0;
}