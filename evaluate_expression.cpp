#include<bits/stdc++.h>
using namespace std;

int change(string& s){
    int res=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='-')continue;
        int temp=s[i]-48;
        res +=temp;
        res=res*10;
    }
    res /=10;
    if(s[0]=='-') res=res*(-1);
    return res;
}

int evalRPN(vector<string> &A) {
    if(A.size()==1){
        int x=change(A[0]);
        return x;
    }
    stack<int> st;
    for(int i=0;i<A.size();i++){
        if(A[i]=="+"){
            int temp=0;
            temp=temp+st.top();
            st.pop();
            temp=temp+st.top();
            st.pop();
            st.push(temp);
        }
        else if(A[i]=="-"){
            int temp=st.top();
            st.pop();
            temp=temp-st.top();
            st.pop();
            temp=temp*(-1);
            st.push(temp);
        }
        else if(A[i]=="*"){
            int temp=1;
            temp=temp*st.top();
            st.pop();
            temp=temp*st.top();
            st.pop();
            st.push(temp);
        }
        else if(A[i]=="/"){
            int temp1=st.top();
            st.pop();
            int temp2=st.top();
            st.pop();
            int temp=temp2/temp1;
            st.push(temp);
        }
        else{
            int temp = change(A[i]);
            st.push(temp);
        }
    }
    return st.top();
}


int main(){
    vector<string> a={"-5"};
    cout<<evalRPN(a)<<endl;

    return 0;
}