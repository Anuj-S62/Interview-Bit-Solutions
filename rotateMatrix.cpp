#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
vector<vector<int> > solve(vector<vector<int> > &A) {
    for(int i=0;i<A.size();i++){
        for(int j=i;j<A.size();j++){
            if(i!=j){
                int temp = A[i][j];
                A[i][j]=A[j][i];
                A[j][i]=temp;
            }
        }
    }
    return A;
}

void rotate(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    A = solve(A);
    for(int i = 0;i<A.size();i++){
        reverse(A[i].begin(),A[i].end());
    }
}
 
 
int main(){
    
 
    return 0;
}