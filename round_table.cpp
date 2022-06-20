#include<bits/stdc++.h>
using namespace std;

int solve(int A) {
    if(A==1) return 2;
    else if(A==2) return 4;
    int mod = 1e9 + 7;
    long long ans = 2;
    for(int i = 2; i <= A; ++i){
        ans *= i;
        ans %= mod;
    }
    return ans;
}
// 282839409
int main(){
    cout<<solve(1000)<<endl;

    return 0;
}