#include<bits/stdc++.h>
using namespace std;

void show(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void merge(vector<int> &A, vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int> C = A;
    A.clear();
    int p1 = 0 , p2 = 0;
    while(true){
        if(p1 == C.size() || p2 == B.size())
            break;
        if(C[p1] < B[p2]){
            A.push_back(C[p1]);
            p1++;
        }
        else if(C[p1] > B[p2]){
            A.push_back(B[p2]);
            p2++;
        }else if(C[p1] == B[p2]){
            A.push_back(C[p1]);
            A.push_back(B[p2]);
            p1++;
            p2++;
        }
    }
    if(p1 == C.size() && p2 < B.size()){
        while(p2 < B.size()){
            A.push_back(B[p2]);
            p2++;
        }
    }
    if(p2 == B.size() && p1 < C.size()){
        while(p1 < C.size()){
            A.push_back(C[p1]);
            p1++;
        }
    }
}



int main(){
    vector<int> A={1,2};
    vector<int> B={-1,2};
    merge(A,B);

    return 0;
}