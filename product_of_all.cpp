#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
void disp(vector<int> arr){
    for(int i:arr)cout<<i<<" ";
    cout<<endl;
}
void disp(vector<long long int> arr){
    for(int i:arr)cout<<i<<" ";
    cout<<endl;
}

vector<int> solve(vector<int> &A) {
    vector<long long int> left(A.size());
    vector<long long int> right(A.size());
    left[0] = 1;
    right[A.size()-1] = 1;
    for(int i = 1;i<A.size();i++){
        left[i] = (left[i-1]*A[i-1])%(1000000007);
    }
    for(int i = A.size()-2;i>=0;i--){
        right[i] = (right[i+1]*A[i+1])%(1000000007);
    }
    // disp(left);
    // disp(right);
    vector<long long int> arr;
    for(int i = 0;i<A.size();i++){
        arr.push_back((left[i]*right[i])%(1000000007));
    }
    // disp(arr);
    vector<int> ans;
    for(int i = 0;i<arr.size();i++) ans.push_back(arr[i]);
    reverse(ans.begin(),ans.end());
    // disp(ans);
    return ans;
} 
 
int main(){
    vector<int> arr = {1,2,3,4};
    solve(arr);
 
    return 0;
}