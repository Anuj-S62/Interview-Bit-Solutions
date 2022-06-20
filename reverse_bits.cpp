#include<bits/stdc++.h>
using namespace std;

unsigned int solve(unsigned int num){
    unsigned int res=0;
    for(int i=0;i<32;i++){
        res<<=1;
        res|=(num&1);
        num=num>>1;
    }
    return res;
}


unsigned int reverse(unsigned int x){
    unsigned int res=0;
    for(int i=0;i<32;i++){
        if((x & (1<<i))){
            res=res | (1<<(31-i));
        }
    }
    return res;
}

int main(){
    // cout<<reverse(3)<<endl;
    // disp(3);
    int n=4;
    cout<<(reverse(n)==solve(n))<<endl;
    return 0;
}