#include<bits/stdc++.h>
using namespace std;

int repeatedNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    float x=A.size()/3.0;
    if(x<1){
        return A[0];
    }
    vector<int> arr=A;
    sort(arr.begin(),arr.end());
    int count=1;
    for(int i=1;i<A.size();i++){
        if(arr[i]==arr[i-1]){
            count++;
        }
        else{
            if(count>x) return arr[i-1];
            count = 1;
        }
    }
    if(count>x)return arr[arr.size()-1];
    return -1;
}



int main(){


    return 0;
}