#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int pow(int x, int n, int d) {
    if(n==1)
    {
        if(x<0) return (x%d)+d;
        return x;
    }
    if(n==0 && x==0)
    return 0;
    if(n==0)
    return 1%d;
    long long temp = pow(x,n/2,d)%d;
    long long mul = (temp * temp)%d;
    if(mul<0)
    mul = mul + d;
    if(n%2==0)
    return mul;
    return (mul*x)%d;
}
 
int main(){
    int A = 71045970;
    int B = 41535484;
    int C = 64735492;
//  20805472
    cout<<pow(A,B,C)<<endl;

    return 0;
}