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
    // unsigned long long int p = convert(x);
    if(x==0 ||x==1 || x==5 || x==6) return 1;
    else if (x==2 || x==3 || x==7 || x==8) return 4;
    else if(x==4 || x==9) return 2;
    return 0;
}

int solve(string A, string B) {
    int x = A[A.length()-1] - '0';
    unsigned long long int y = convert(B);
    y = y%(cyclicity(x));
    cout<<x<<" "<<y<<endl;
    int ans  = pow(x,y);
    
    return ans%10;

}



int main(){
    cout<<solve("2","10")<<endl;
    // cout<<convert("11")<<endl;
    // cout<<cyclicity(2)<<endl;
    return 0;
}