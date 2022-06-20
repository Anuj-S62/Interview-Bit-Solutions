#include<bits/stdc++.h>
using namespace std;

int diffPossible(vector<int> &A, int B) {
    if(B==0){
        for(int i=0;i<A.size()-1;i++){
            if(A[i]==A[i+1]) return 1;
        }
        return 0;
    }
    int i=0,j=1;
    while(i<A.size() && j< A.size()){
        if(i<j && A[j]-A[i]==B) return 1;
        else if(A[j]-A[i]<B)j++;
        else i++;
    }
    return 0;
}

int main(){
    // vector<int> arr = { 0, 1, 9, 10, 13, 17, 17, 17, 23, 25, 29, 30, 37, 38, 39, 39, 40, 41, 42, 60, 64, 70, 70, 70, 72, 75, 85, 85, 90, 91, 91, 93, 95 };
    vector<int> arr = {1,2,2,3,4};
    cout<<diffPossible(arr,0)<<endl;
    

    return 0;
}