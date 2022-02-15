#include<bits/stdc++.h>
using namespace std;

void disp(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int count=1;
    if(A.size()==1)return A.size();
    vector<int> temp;
    temp.push_back(A[0]);
    for(int i=1;i<A.size();i++){
        if(A[i]==A[i-1] && count<2){
            temp.push_back(A[i]);
            count++;
        }
        if(A[i]!=A[i-1]){
            count=0;
            temp.push_back(A[i]);
            count++;
        }
    }
    A.clear();
    A=temp;
    return A.size();
}


int main(){
    vector<int> arr={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    removeDuplicates(arr);
    disp(arr);

    return 0;
}