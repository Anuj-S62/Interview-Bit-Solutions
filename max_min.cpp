#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &A) {
int min=A[0],max=A[0];
    for(int i=0;i<A.size();i++){
        if(min>A[i]){
            min=A[i];
        }
        if(max<A[i]){
            max=A[i];
        }
    }
    return max+min;
}

int main(){
    

    return 0;
}