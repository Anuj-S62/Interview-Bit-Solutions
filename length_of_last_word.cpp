#include<bits/stdc++.h>
using namespace std;

int lengthOfLastWord(const string A) {
    int length=0;
    for(int i=0;i<A.length();i++){
        if(A[i]!=' ')length++;
        else if(A[i]==' ' && i==A.length()-1) continue;
        else if(A[i]==' ' && A[i+1]!=' ') length=0;
    }
    return length;
}


int main(){
    

    return 0;
}