#include<bits/stdc++.h>
using namespace std;

int reverse(int A) {
    vector<int> arr;
    while(A!=0){
        arr.push_back(A%10);
        A=A/10;
    }
    long long int x=0;
    long long int temp=10;
    for(int i=0;i<arr.size();i++){
        temp=pow(10,(arr.size()-1-i));
        x=x+(arr[i]*temp);
    }
    if(x<(-2147483648) || x>2147483647){
        return 0;
    }
    if(A<0){
        return -1*x;
    }
    return x;
}

int main(){
    

    return 0;
}