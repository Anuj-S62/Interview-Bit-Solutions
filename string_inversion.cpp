#include<bits/stdc++.h>
using namespace std;

string solve(string A) {
    for(int i=0;i<A.length();i++){
        if((int)A[i]>=(int)'A' && (int)A[i]<=(int)'Z'){
            A[i]=A[i]+((int)'a'-(int)'A');
        }
        else{
            A[i]=A[i]-((int)'a'-(int)'A') ;
        }
    }
    return A;
}

int main(){
    cout<<solve("InterviewBit")<<endl;
 
    return 0;
}