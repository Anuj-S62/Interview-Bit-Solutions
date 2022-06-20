#include<bits/stdc++.h>
using namespace std;

int kthsmallest(const vector<int> &A, int B) {
    vector<int> arr=A;
    sort(arr.begin(),arr.end());
    return arr[B-1];
}


int main(){
    

    return 0;
}