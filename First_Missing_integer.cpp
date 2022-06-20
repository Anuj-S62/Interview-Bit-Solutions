#include<bits/stdc++.h>
using namespace std;

int firstMissingPositive(vector<int> &A) {
    sort(A.begin(),A.end());
    int i=0;
    while(A[i]<=0){
        i++;
    }
    int a=1;
    while(i!=A.size()){
        if(i==A.size()-1){
            return A[i]+1;   
        }
        if(A[i]==a){
            i++;
            a++;
            continue;
        }
        return a;
    }
    return 1;  // when all elements are <=0
}

int main(){
    vector<int> arr={-3,0,6,5,0,1,2};
    cout<<firstMissingPositive(arr);

    return 0;
}