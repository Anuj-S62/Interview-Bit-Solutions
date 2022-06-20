#include<bits/stdc++.h>
using namespace std;

string convertToTitle(int A) {
    string res="";
    int x='A';
    while(A!=0){
        char temp=((A%26) + x - 1);
        if(A%26==0){
            temp='Z';
            A=A+1;
        }
        A=A/26;
        if(temp=='Z')A=A-1;
        res = res + temp;
    }
    reverse(res.begin(),res.end());
    return res;
}


int main(){
    cout<<convertToTitle(943566)<<endl;

    return 0;
}