#include<bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int> &A) {
    int carry=0;
    int n=A.size();
    if(A[A.size()-1]==9){
        A[A.size()-1]=0;
        carry++;
    }
    else{
        A[A.size()-1]++;
        vector<int> arr;
        int j=0;
        while(A[j]==0){
            j++;
        }
        for(int i=j;i<A.size();i++){
            arr.push_back(A[i]);
        }
        return arr;
    }
    int k=A.size()-2;
    while(carry!=0 && k>=0){
        if(A[k]==9){
            A[k]=0;
            carry=1;
            k--;
            continue;
        }
        else if(A[k]!=9 && carry==1){
            A[k]++;
            carry=0;
            k--;
        }
    }
    vector<int> arr;
        if(carry==1){
            A.insert(A.begin(),carry);
            carry=0;
            
        }
        int j=0;
        while(A[j]==0){
            j++;
        }
        for(int i=j;i<A.size();i++){
            arr.push_back(A[i]);
        }
        return arr;

}

int main(){
    vector<int> arr={9,9,9,9,9};
    vector<int> res=plusOne(arr);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }

    return 0;
}