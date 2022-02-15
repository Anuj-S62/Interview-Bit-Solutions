#include<bits/stdc++.h>
using namespace std;

void sortColors(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int x=0,y=0,z=0;
    for(int i=0;i<A.size();i++){
        if(A[i]==0)x++;
        else if(A[i]==1)y++;
        else z++;
    }
    for(int i=0;i<x;i++){
        A[i]=0;
    }
    for(int i=x;i<x+y;i++){
        A[i]=1;
    }
    for(int i=(x+y);i<x+y+z;i++){
        A[i]=2;
    }
}

int main(){
    

    return 0;
}