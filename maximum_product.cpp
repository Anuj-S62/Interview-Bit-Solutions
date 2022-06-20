#include<bits/stdc++.h>
using namespace std;

int maxp3(vector<int> &A) {
    sort(A.begin(),A.end());
    int ans1 = A[A.size()-1]*A[A.size()-2]*A[A.size()-3];
    int ans2 = A[0]*A[1]* A[A.size()-1];
    return max(ans1,ans2);
}


int main(){
    

    return 0;
}