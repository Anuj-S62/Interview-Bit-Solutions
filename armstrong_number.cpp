#include<bits/stdc++.h>
using namespace std;

int solve(int A) {
    int sum=0;
    int digit=0;
    int x=A;
    while(x){
        digit++;
        x=x/10;
    }
    x=A;
    while(x){
        sum = sum +pow(x%10,digit);
        x=x/10;
    }
    if(sum==A) return 1;
    return 0;
}


int main(){
    

    return 0;
}