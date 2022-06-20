#include<bits/stdc++.h>
using namespace std;

int solve(string A) {
    int j=A.length()-1;
    int count=0;
    int i=0;
    while(i<j){
        if((A[i]!=A[j]) && (A[j-1]==A[i]) && (count == 0)){
            j--;
            count++;
        }
        else if((A[i]!=A[j]) && (A[i+1]==A[j]) && (count == 0)){
            i++;
            count++;
        }
        else if(((A[i]!=A[j]) && (A[i+1]!=A[j])) || ((A[i]!=A[j]) && (A[j-1]!=A[i]))){
            return 0;
        }
        else if(((A[i]!=A[j]) && (A[i+1]==A[j]) && (count != 0)) || ((A[i]!=A[j]) && (A[j-1]==A[i]) && (count != 0))){
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}


int main(){
    cout<<solve("cnvinhc")<<endl;

    return 0;
}
