#include<bits/stdc++.h>
using namespace std;

float convert(string s){
    float a=0;
    for(int i=0;i<s.length();i++){
        float x=s[i]-48;
        float p=1;
        for(int j=0;j<s.length()-i-1;j++){
            p=p*10;
        }
        x=x*p;
        a=a+x;
    }
    return a;
}

int highestScore(vector<vector<string> > &A) {
    sort(A.begin(),A.end());
    vector<float> avg;
    float x=convert(A[0][1]);
    float temp=1;
    for(int i=1;i<A.size();i++){
        if(A[i][0]==A[i-1][0]){
            x=x+(convert(A[i][1]));
            temp++;
        }
        else{
            avg.push_back((x/temp));
            x=convert(A[i][1]);
            temp=1;
        }
    }
    avg.push_back((x/temp));
    sort(avg.begin(),avg.end());
    int res=avg[avg.size()-1];
    return res;
}

int main(){

    return 0;
}