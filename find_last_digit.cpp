#include<bits/stdc++.h>
using namespace std;

unsigned long long int convert(string x){
    unsigned long long int ans = 0;
    for(int i=0;i<x.length();i++){
        // cout<<"hello"<<endl;
        int temp = x[i]-'0';
        ans = ans + temp;
        ans = ans * 10;
    }
    ans = ans/10;
    return ans;
}

int cyclicity(int x){
    if(x==0 ||x==1 || x==5 || x==6) return 1;
    else if (x==2 || x==3 || x==7 || x==8) return 4;
    else if(x==4 || x==9) return 2;
    return 0;
}

int solve(string A, string B) {
    int x = A[A.length()-1] - '0';
    unsigned long long int y = convert(B);
    cout<<y<<endl;
    y = y%(cyclicity(x));
    int ans  = pow(x,y);
    
    return ans%10;

}


int main(){
    string A = "0174520669358005603046598506479720736793297760682474223148909553942090532954907781068677982335584824";
    string B = "5421158054975868127102040792138616334158595194152449113616682432094194180103217434896269284568749648";
    cout<<solve(A,B)<<endl;

    return 0;
}