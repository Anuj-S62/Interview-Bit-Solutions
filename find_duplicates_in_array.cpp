#include<bits/stdc++.h>
using namespace std;

int repeatedNumber(const vector<int> &A) {
    vector<int> arr=A;
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        if(arr[i]-arr[i+1]==0){
            return arr[i];
        }
    }
    return -1;
}


int main(){
    

    return 0;
}