#include<bits/stdc++.h>
using namespace std;

int solve(string A) {
    int a=0,b=0,c=0,d=0,e=0;
    if(A.length()>=8 && A.length()<=15) a++;
    else return 0;
    for(int i=0;i<A.length();i++){
        if(A[i]>=48 && A[i]<=57) b++;
        else if(A[i]>=97 && A[i]<=122) c++;
        else if(A[i]>=65 && A[i]<=90) d++;
        else if(A[i]=='@' || A[i]== '#' || A[i]=='%' || A[i]=='&'|| A[i]=='!' || A[i] == '$' || A[i]=='*') e++;
    }
    if(a && b && c && d && e) return 1;
    return 0;
}

int main(){

    return 0;
}