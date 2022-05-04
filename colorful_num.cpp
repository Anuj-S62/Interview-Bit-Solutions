#include<bits/stdc++.h>
using namespace std;


long long int multiply(int n){
    long long int prod = 1;
    while(n){
        prod *= n%10;
        n = n/10;
    }
    return prod;
}

int colorful(int A) {
    unordered_set<long long int> st;
    int x = 10;
    int len = 0;
    int temp = A;
    while(temp){
        len++;
        temp = temp/10;
    }
    int p = 1;
    for(int i = 0;i<len;i++){
        p = p*10;
    }
    temp = 0;
    int c = A;
    while(x<p+1){
        c = A;
        for(int i = 0;i<len - temp;i++){
            if(st.find(multiply(c%x))!=st.end()) return 0;
            st.insert(multiply(c%x));
            c = c/10;
        }
        temp++;
        x = x*10;
    }
    return 1;
}


int main(){
    cout<<colorful(12)<<endl;

    return 0;
}