#include<bits/stdc++.h>
using namespace std;

int isPower(int A) {
    if(A==1 ) return 1;
    else{
        for(int i=2;i<32;i++){
            for(int j=2;j<65536;j++){
                if(pow(j,i)==A)return 1;
                else if(pow(j,i)>A)break;
            }
        }
    }
    return 0;
}

int main(){
    

    return 0;
}