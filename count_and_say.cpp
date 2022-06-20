#include<bits/stdc++.h>
using namespace std;

string countAndSay(int A) {
    if(A==1) return "1";
    string temp = countAndSay(A-1);
    string res;
    int x = 0;
    for(int i=0;i<temp.length();i++){
        if(x==0) x++;
        else if(temp[i]==temp[i-1]){
            x++;
        }
        else if(temp[i]!=temp[i-1]){
            char a = x + '0';
            res.push_back(a);
            res.push_back(temp[i-1]);
            x = 1;
        }
    }
    char a = x + '0';
            res.push_back(a);
            res.push_back(temp[temp.length()-1]);
    return res;

}

int main(){
    cout<<countAndSay(6)<<endl;

    return 0;
}