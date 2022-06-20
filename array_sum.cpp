#include<bits/stdc++.h>
using namespace std;
void disp(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

vector<int> addArrays(vector<int> &A, vector<int> &B) {
    vector<int> res;
    int i=A.size()-1;
    int j=B.size()-1;
    int carry=0;
    while(i>=0 || j>=0){
        if(i>=0 && j>=0){
            int temp=A[i]+B[j]+carry;
            i--;
            j--;
            carry=temp/10;
            res.push_back(temp%10);
        }
        else if(i>=0 && j<0){
            int temp=A[i]+carry;
            carry=temp/10;
            res.push_back(temp%10);
            i--;
        }
        else if(j>=0 && i<0){
            int temp=B[j]+carry;
            carry=temp/10;
            res.push_back(temp%10);
            j--;
        }
    }
    if(carry==1){
        res.push_back(carry);
    }
    vector<int> sum;
    for(int i=res.size()-1;i>=0;i--){
        sum.push_back(res[i]);
    }
    return sum;
}


int main(){
    vector<int> A={ 7, 7, 6, 2, 0, 1, 7 };
    vector<int> B={ 4, 3, 5, 1, 9, 1, 1 };
    vector<int> sum=addArrays(A,B);
    disp(sum);

    return 0;
}