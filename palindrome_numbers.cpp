#include<bits/stdc++.h>
using namespace std;


void show(vector<int> arr){
    for(int i =0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
}

bool ispal(int n){
    vector<int> arr;
    while(n){
        arr.push_back(n%10);
        n = n/10;
    }
    for(int i = 0;i<arr.size()/2;i++){
        if(arr[i] != arr[arr.size()-1-i]) return false;
    }
    return true;
}


int solve(int A, int B, int C) {
    assert(1 <= A && A <= B && B <= 1e5);
    assert(1 <= C && C <= 1e5);
    vector<int> pal;
    for(int i = A; i <= B; ++i){
        if(ispal(i)) pal.push_back(i);
    }
    int n = pal.size();
    int j = 0;
    int ans = 0;
    show(pal);
    for(int i = 0; i < n; ++i){
        while(j < n && pal[j] - pal[i] <= C ){
            cout<<"helo"<<endl;
            ++j;
        }
        ans = max(ans, j-i);
        if(ans==1){
            cout<<j<<" "<<i<<endl;
        }
    }
    return ans;
}

int main(){
    cout<<solve(80793,81703,61)<<endl;

    return 0;
}