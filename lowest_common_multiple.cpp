#include<bits/stdc++.h>
using namespace std;

long long int gcd(int a,int b){
    if(b == 0) return a;
    return gcd(b , a%b);
}

long solve(int A, int B) {
    long long int x = (A/gcd(A,B))*B;
    return x;
}


int main(){
    

    return 0;
}