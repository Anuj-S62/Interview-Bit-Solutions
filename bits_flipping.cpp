#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int solve(int A) {
    vector<int> arr;
    while(A){
        if(A%2==1) arr.push_back(0);
        else arr.push_back(1);
        A = A/2;
    }
    int ans = 0;
    for(int i = arr.size();i>=0;i--){
        ans = ans + (arr[i] * pow(2,i));
    }
    return ans;
}
 
int main(){
    cout<<solve(5)<<endl;
 
    return 0;
}