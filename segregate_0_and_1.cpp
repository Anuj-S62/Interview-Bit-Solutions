#include<bits/stdc++.h>
using namespace std;

void disp(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

vector<int> solve(vector<int> &A) {
    sort(A.begin(),A.end());
    return A;
}


int main(){
    vector<int> A={1,0,1,0};
    vector<int> arr=solve(A);

    return 0;
}