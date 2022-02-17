#include<bits/stdc++.h>
using namespace std;

int singleNumber(const vector<int> &A) {
    vector<int> arr;
    int result = 0;
    for(int i=0;i<32;i++){  
        arr.push_back(0);
        for(int j=0;j<A.size();j++){
            if((A[j]>>i) & 1)arr[i]++;
            }
        result |= ((arr[i]%3)<<i);
        }
/*
    A={1,2,2,1,2,3}
    1 = 0 0 1   
    1 = 0 0 1
    1 = 0 0 1
    2 = 0 1 0
    2 = 0 1 0
    2 = 0 1 0
    3 = 0 1 1 

 bits = 0 4 4
bits%3= 0 1 1
result= 0 1 1
               */

    return result;
}


int main(){
    

    return 0;
}