#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
 int nchoc(int A, vector<int> &B) {
    priority_queue<int> pq;
    for(int i:B){
        pq.push(i);
    }
    long long int ans = 0;
    for(int i = 0;i<A;i++){
        ans += pq.top();
        ans = ans%(1000000007);
        int x = pq.top();
        pq.pop();
        x = x/2;
        pq.push(x);
    }
    return ans%(1000000007);
}

 
int main(){
    int x;
    x = 5;
    cout<<x<<endl;
 
    return 0;
}