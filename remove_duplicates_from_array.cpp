#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int> c;
    for(int i=0;i<A.size();i++){
        c.push_back(A[i]);
        while(A[i]==A[i+1]){
            i++;
        }
    }
    int x=c.size();
    A.clear();
    A=c;
    return x;

}


int main(){
    

    return 0;
}