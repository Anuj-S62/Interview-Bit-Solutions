#include<bits/stdc++.h>
using namespace std;

string change(int x){
    string res = "";
    char a;
    while(x!=0){
        a=x%10+48;
        x=x/10;
        res=res+a;
    }
    string final="";
    for(int i=res.length()-1;i>=0;i--){
        final=final+res[i];
    }
    return final;
}

vector<string> fizzBuzz(int A) {
    vector<string> res;
    string s1="Fizz";
    string s2="Buzz";
    string s3=s1+s2;
    for(int i=1;i<=A;i++){
        if(i%3==0 && i%5==0){
            res.push_back(s3);
            continue;
        }
        if(i%3==0){
            res.push_back(s1);
            continue;
        }
        if(i%5==0){
            res.push_back(s2);
            continue;
        }
        string temp=change(i);
        res.push_back(temp);
    }
    return res;
}

int main(){
    

    return 0;
}