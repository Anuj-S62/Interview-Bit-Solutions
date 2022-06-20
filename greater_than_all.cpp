#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &A) {
    int count = 1;
    int max = A[0];
    for(int i=1;i<A.size();i++){
        if(A[i]>max){
            count++;
            max = A[i];
        }
    }
    return count;
}


int main(){
    

    return 0;
}