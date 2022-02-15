#include<bits/stdc++.h>
using namespace std;

void disp(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int removeElement(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int> res;
    for(int i=0;i<A.size();i++){
        if(A[i]!=B){
            res.push_back(A[i]);
        }
    }
    A.clear();
    A=res;
    return A.size();
}

int main(){
    vector<int> arr={4, 1, 1, 2, 1, 3};
    cout<<removeElement(arr,1)<<endl;
    disp(arr);

    return 0;
}