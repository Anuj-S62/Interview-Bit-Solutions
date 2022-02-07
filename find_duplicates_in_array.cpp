#include<bits/stdc++.h>
using namespace std;

int repeatedNumber(const vector<int> &A) {
    int arr[A.size()+1];
    for(int i=0;i<A.size()+1;i++){
        arr[i]=0;
    }
    for(int i=0;i<A.size();i++){
        int x=A[i];
        if(arr[A[i]]==1){
            return A[i];
        }
        else{
            arr[A[i]]=1;
        }
    }
    return -1;

}


int main(){
    

    return 0;
}