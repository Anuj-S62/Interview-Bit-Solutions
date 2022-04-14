#include<bits/stdc++.h>
using namespace std;

string add(string a,string b){
    int i=a.length()-1;
    int j=b.length()-1;
    int carry=0;
    string res="";
    while(i>=0 || j>=0){
        if(i>=0 && j>=0 ){
            int a1=a[i]-48;
            int a2=b[j]-48;
            int x=(a1+a2+carry)%10;
            carry=(a1+a2+carry)/10;
            i--;
            j--;
            char temp = x + 48;
            res=res+temp;
        }
        else if(i<0 && j>=0){
            int a1=b[j]-48;
            int x=(a1+carry)%10;
            carry = (a1+carry)/10;
            char temp = x+48;
            res=res+temp;
            j--;
        }
        else if(j<0 && i>=0){
            int a1=a[i]-48;
            int x=(a1+carry)%10;
            carry = (a1+carry)/10;
            char temp = x+48;
            res=res+temp;
            i--;
        }
    }
    if(carry!=0){
        char temp = carry+48;
        res=res+temp;
    }
    reverse(res.begin(),res.end());
    return res;
}
string multiply2(string a,int num){
    string res="";
    int carry=0;
        int y=0;
    while(a[y]=='0'){
        y++;
    }
    for(int i=a.length()-1;i>=y;i--){
        int a1=a[i]-48;
        int x=(a1*num + carry)%10;
        carry=(a1*num + carry)/10;
        char temp = x+48;
        res=res+temp;
    }
    if(carry>0){
        char temp = carry+48;
        res=res+temp;
    }
    reverse(res.begin(),res.end());
    return res;
}

string multiply(string A, string B) {
    if(A=="0"||B=="0"){
        return "0";
    }
    string res;
    string zero="";
    int y=0;
    while(B[y]=='0'){
        y++;
    }
    for(int i=B.length()-1;i>=y;i--){
        string temp;
        int x=B[i]-48;
        temp=multiply2(A,x);
            temp=temp+zero;
            res=add(res,temp);
            zero=zero+'0';
    }
    return res;
}

string factorial(int n){
    string ans="1";
    string temp="1";
    for(int i=2;i<=n;i++){
        // cout<<temp<<" * ";
        temp=add(temp,"1");
        ans=multiply(ans,temp);
    }
    // cout<<n<<"! = "<<endl;
    return ans;
}

int main(){
    cout<<factorial(100)<<endl;

    return 0;
}