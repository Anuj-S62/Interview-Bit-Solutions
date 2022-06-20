#include<bits/stdc++.h>
using namespace std;
// 
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
// 9999800001


int main(){
    // cout<<add("20","100")<<endl;
    // cout<<multiply("123",9)<<endl;
    // cout<<multiply("56675688419586288442134264892419611145485574406534291250836", "5131848155574784703269632922904933776792735241197982102373370")<<endl;
    // cout<<add("98657823647628763862","5674607753678865")<<endl;
    cout<<multiply("05","7")<<endl;
    // cout<<multiply2("256437",5)<<endl;
    //      1795059
    //     10257480
    //    153862200
    //   2051496000
    //  15386220000
    // 128218500000
    // cout<<add("5","7")<<endl;
    
    return 0;
}