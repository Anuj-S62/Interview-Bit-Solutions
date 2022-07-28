#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool capicity(vector<int> &arr,int cap,int days){
    int count = 0;
    int dayCnt =0;
    for(int i:arr){
        if(count+i<=cap) count+=i;
        else dayCnt++,count = i;
    }
    if(dayCnt<days) return true;
    return false;
}

int solve(vector<int> &A, int B) {
    long long int low = INT_MIN;
    long long int mid;
    long long int high = INT_MAX;
    for(long long int i:A) low = max(low,i);
    while(low<high){
        mid = (low+high)/2;
        if(capicity(A,mid,B)) high = mid;
        else low = mid;
        if(high-low<=1){
            int a = low;
            if(capicity(A,a,B)) return a;
            else a = high;
            return a;
        }
    }
    return 0;
}

 
int main(){
    vector<int> arr = {16, 2, 11, 4, 18, 17, 17, 8, 8, 6, 7, 9, 17, 20, 10, 5, 2, 11, 3 };
    int B = 10;
    cout<<solve(arr,B)<<endl;
 
    return 0;
}