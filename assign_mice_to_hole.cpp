#include<bits/stdc++.h>
using namespace std;

int mice(vector<int> &A, vector<int> &B) {
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    int count = 0;
    for(int i=0;i<A.size();i++){
        int temp = abs(A[i] - B[i]);
        count = max(temp,count);
    }
    return count;
}


int main(){
    

    return 0;
}