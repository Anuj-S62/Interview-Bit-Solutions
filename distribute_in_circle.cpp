#include<bits/stdc++.h>
using namespace std;

int solve(int A, int B, int C) {
    while(A>B){
        A=A-B;
    }
    while(C>B){
        C=C-B;
    }
    int res=A+C-1;
    while(res>B){
        res=res-B;
    }
    return res;
}


int main(){
   cout<<solve(16673,7444,30872); 

    return 0;
}
