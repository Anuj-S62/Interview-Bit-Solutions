#include<bits/stdc++.h>
using namespace std;

int singleNumber(const vector<int> &A) {
       int n = A.size();
       int result = 0;
       for (int i = 0; i < n; i++) {
           result ^= A[i];
       }
       return result;
    }

int main(){
    vector<int> arr={1,2,2,1,3};
    cout<<singleNumber(arr)<<endl;

    return 0;
}