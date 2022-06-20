#include<bits/stdc++.h>
using namespace std;

int trailingZeroes(int A) {
    int count=0;
    while(A!=0){
        count=count+A/5;
        A=A/5;
    }
    return count;
}


int main(){
    

    return 0;
}