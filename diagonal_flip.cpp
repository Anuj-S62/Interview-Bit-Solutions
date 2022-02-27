#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > solve(vector<vector<int> > &A) {
    for(int i=0;i<A.size();i++){
        for(int j=i;j<A.size();j++){
            if(i!=j){
                int temp = A[i][j];
                A[i][j]=A[j][i];
                A[j][i]=temp;
            }
        }
    }
    return A;
}


int main(){
    

    return 0;
}