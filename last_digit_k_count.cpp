#include<bits/stdc++.h>
using namespace std;

int solve(int A, int B, int C) {

   int i=A, count=0;
    while(i%10!=C && i<=B){
        i++;
    }
    if(i%10==C && i<=B){
        count++;
    }
    
    if(i>=B){
        return count;
    }

    count+=((B-i)/10);
    return count;
   
}



int main(){
    // cout<<solve(189923850,889439105,5)<<endl;
    cout<<solve(10,111,1)<<endl;

    return 0;
}