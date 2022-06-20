#include<bits/stdc++.h>
using namespace std;

int coverPoints(vector<int> &A, vector<int> &B) {
    int step=0;
    for(int i=0;i<A.size()-1;i++){
        int c=max(abs(A[i]-A[i+1]),abs(B[i]-B[i+1]));
        step=step+c;
    }
    return step;
}

int main(){
    

    return 0;
}