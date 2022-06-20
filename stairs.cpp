#include<bits/stdc++.h>
using namespace std;

// int climbStairs(int n) {
//     int dp[n];
//     if(n==0) return 1;
//     dp[0]=1;
//     dp[1]=2;
//     for(int i=2;i<n;i++){
//         dp[i]=dp[i-1]+dp[i-2];
//     }
//     return dp[n-1];
// }

void calc(int a,int &count){
    if(a<=0){
        if(a==0) count++;
        return;
    }
    calc(a-1,count);
    calc(a-2,count);
}




int main(){
    int count = 0;
    calc(7,count);
    cout<<count<<endl;

    return 0;
}