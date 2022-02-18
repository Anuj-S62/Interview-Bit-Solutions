#include<bits/stdc++.h>
using namespace std;

void disp(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

vector<int> prevSmaller(vector<int> &A) {
    stack<int> st;
    st.push(A[0]);
    vector<int> res={-1};
    for(int i=1;i<A.size();i++){
        if(A[i]>st.top()){
            res.push_back(st.top());
            st.push(A[i]);
        }
        else if(A[i]<=st.top()){
            cout<<i<<endl;
            while(A[i]<=st.top()){
                st.pop();
                if(st.size()==0)break;
            }
            if(st.size()==0){
                res.push_back(-1);
                st.push(A[i]);
            }
            else{
                res.push_back(st.top());
                st.push(A[i]);
            } 
        }
        else{
            res.push_back(-1);
        }
    }
    return res;
}

int main(){
    vector<int> arr={39, 27, 11, 4, 24, 32, 32, 1};
    // vector<int> arr={34, 35, 27, 42, 5, 28, 39, 20, 28};
    vector<int> res=prevSmaller(arr);
    disp(res);
    return 0;
}