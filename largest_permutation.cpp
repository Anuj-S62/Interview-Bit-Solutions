#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
void show(vector<int> arr){
    for(int i: arr) cout<<i<<" ";
    cout<<endl;
}

vector<int> solve(vector<int> &A, int B) {
    if(B>=A.size()-1){
        sort(A.begin(),A.end());
        reverse(A.begin(),A.end());
        return A;
    }
    priority_queue<int> pq;
    unordered_map<int,int> mp;
    for(int i = 0;i<A.size();i++){
        pq.push(A[i]);
        mp[A[i]] = i;
    }
    // cout<<"-----"<<endl;
    // for(auto i:mp) cout<<i.first<<" "<<i.second<<endl;
    // cout<<"------"<<endl;
    int count = 0;
    for(int i = 0;i<A.size();i++){
        // cout<<pq.top()<<endl;
        // int temp = A[i];
        if(count==B) break;
        if(A[i]<pq.top()){
        int x = A[i];
        A[i] = pq.top();
        int y = pq.top();
        int idx = mp[y];
        A[mp[y]] = x;
        pq.pop();
        mp[x] = idx;
        count++;
        }
        else pq.pop();
        // show(A);
    }
    return A;
}



int main(){
    // vector<int> a = {3,2,1};
    // vector<int> a = {3, 2, 4, 1, 5};
    vector<int> a = {8, 2, 7, 4, 5, 6, 3, 1 };
    solve(a,2);
    show(a);
 
    return 0;
}