#include<bits/stdc++.h>
using namespace std;

int summ(int n){
    int x=0;
    while(n){
        x += n%10;
        n /= 10;
    }
    return x;
}
int solve(int A) {
    if(A<=9)return A;
    int sum=0;
    while(A>9){
        sum = summ(A);
        A = sum;
    }
    return sum;

}



int main(){
    cout<<solve(99)<<endl;
    // cout<<summ(19)<<endl;
    return 0;
}