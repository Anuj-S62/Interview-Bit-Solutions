#include<bits/stdc++.h>
using namespace std;

int solve(int A) {
    int res=0;
    while((A&1)!=1){
        res+=1;
        A=A>>1;
    }
    return res;
}

//   RECURSIVE CODE

// int solve(int A) {
//     int res=0;
//     if((A&1)==0){
//         res++;
//         return res + solve((A>>1));
//     }
//     else return res;
// }



int main(){
    

    return 0;
}