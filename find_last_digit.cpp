#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int cyclicity(int n){
    if(n==2 || n==3 || n==7 || n==8) return 4;
    else if(n==9 || n==4) return 2;
    else if(n==5 || n==6 || n==1) return 1;
    else return 0;
}
int modulo(string a,int n){
    int rem = 0;
    for(int i = 0;i<a.length();i++){
        int x = a[i] - '0';
        rem = rem*10;
        rem += x;
        rem %= n;
    }
    return rem;
} 
int solve(string A, string B) {
    int x = A[A.size()-1]-'0';
    if(x==0) return 0;
    else if(x==1) return 1;
    else if(x==6) return 6;
    else if(x==5) return 5;
    // cout<<x<<endl;
    int cyc = cyclicity(x);
    // cout<<cyc<<endl;
    int n = modulo(B,cyc);
    // cout<<n<<endl;
    if(n==0){
        int temp =1;
        while(cyc--){
            temp*=x;
        }
        return temp%10;
    }
    int ans = 1;
    while(n--){
        ans *= x;
    }
    return ans%10;
}

 
int main(){
    
 
    return 0;
}