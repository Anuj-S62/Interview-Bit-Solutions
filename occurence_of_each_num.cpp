#include<bits/stdc++.h>
using namespace std;

vector<int> findOccurences(vector<int> &A) {
    vector<int> freq;
    sort(A.begin(),A.end());
    int count=1;
    for(int i=0;i<A.size();i++){
        if(i==A.size()-1){
            freq.push_back(count);
        }
        else if(A[i]==A[i+1]){
            count++;
        }
        else if(A[i]!=A[i+1]){
            freq.push_back(count);
            count=1;
        }
    }
    return freq;
}


int main(){
    

    return 0;
}