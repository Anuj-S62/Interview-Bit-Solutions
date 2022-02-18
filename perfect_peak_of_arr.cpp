#include<bits/stdc++.h>
using namespace std;

int perfectPeak(vector<int> &A) {
    int x=1;
    for(int i=1;i<A.size()-1;i++){
        for(int j=0;j<A.size();j++){
            if((j<i && A[i]<=A[j]) || (j>i && A[j]<=A[i])){
                x=0;
                break;
            }
        }
        if(x==1){
            return 1;
        }
        x=1;
    }
    return 0;
}

int main(){
    vector<int> arr={5706, 26963, 24465, 29359, 16828, 26501, 28146, 18468, 9962, 2996, 492, 11479, 23282, 19170, 15725, 6335};
    cout<<perfectPeak(arr)<<endl;

    return 0;
}