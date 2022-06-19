#include<bits/stdc++.h>
using namespace std;


long solve(string A) {
    int i = 0;
    long long int sum = 0;
    while(i<A.length()){
        if(A[i]>=48 && A[i]<=57){
            long long int temp = 0;
            while(A[i]>=48 && A[i]<=57){
                temp += A[i]-48;
                temp = temp * 10;
                i++;
            }
            // cout<<"helo"<<endl;
            temp  = temp/10;
            sum += temp;
            continue;
        }
        i++;
    }
    return sum;
}


int main(){
    cout<<solve("a12b34")<<endl;

    return 0;
}