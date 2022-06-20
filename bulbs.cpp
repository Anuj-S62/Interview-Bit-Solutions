#include<bits/stdc++.h>
using namespace std;

int bulbs(vector<int> &A) {
    int count  = 0;
    for(int i=0;i<A.size();i++){
        if(!count && A[i]==0){
            count++;
        }
        else if(count%2==1 && A[i]==1){
            count++;
        }
        else if(count%2==0 && A[i]==0){
            count++;
        }
    }
    return count;
}


int main(){
    

    return 0;
}