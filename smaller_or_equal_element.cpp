#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &A, int B) {
    if(B>=A[A.size()-1]){
        return A.size();
    }
    if(B<A[0]){
        return 0;
    }
    int low=0;
    int high=A.size()-1;
    int count =0;
    int mid=(high+low)/2;
    while(low<high  && high-low!=1){
        if(A[mid]<=B){
            count=count+(mid-low);
            low=mid;
        }
        else if(A[mid]>B){
            high=mid;
        }

        mid=(high+low)/2;
    }
    return ++count;
}
int main(){
    vector<int> arr={4, 4, 12, 12, 15, 19, 23, 24, 34, 42};
    cout<<solve(arr,48)<<endl;

    return 0;
}