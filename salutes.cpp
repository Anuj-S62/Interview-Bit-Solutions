#include<bits/stdc++.h>
using namespace std;

long countSalutes(string A) {
    long long int j=0;
    long long int sal=0;
    long long int x=0;
    for(long long int i=A.length()-1;i>=0;i--){
        if(A[i]=='<'){
            x=i;
            j=1;
            break;
        }
    }
    for(long long int i=x-1;i>=0;i--){
        if(A[i]=='>'){
            sal += j;
        }
        else j++;
    }
    return sal;
}


int main(){
    cout<<

    return 0;
}