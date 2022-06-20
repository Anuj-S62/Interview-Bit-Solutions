#include<bits/stdc++.h>
using namespace std;

// int solve(vector<int> &A, int B) {
//     map<int,int> mp;
//     for(int i:A){
//         mp[i]++;
//     }
//     // for(auto i:mp){
//     //     cout<<i.first<<" "<<i.second<<endl;

//     // }
//     int profit = 0;
//     int count = 0;
//     map<int,int> :: iterator itr = mp.end();
//     itr--;
    
//     while(mp.size()){
//         if(itr->second==1){
//             profit = profit + itr->first;
//             count++;
//             int x = itr->first;
//             mp[itr->first-1]++;
//             auto it = mp.find(itr->first);
//             itr--;
//             mp.erase(it);
//         }
//         else if(itr->second > 1){
//             profit = profit + itr->first;
//             count++;
//             itr->second--;
//         }
//         // cout<<profit<<endl;
//         if(count==B) return profit;

//     }
//     return profit;
// }

int solve(vector<int> &A, int B){
    priority_queue<int> pq;
    for(int i:A) pq.push(i);
    int profit = 0;
    for(int i = 0;i<B;i++){
        int x = pq.top();
        profit = profit + pq.top();
        pq.pop();
        if(x-1){
            pq.push(x-1);
        }
    }
    return profit;

}

int main(){
    vector<int> arr = {2,3};
    cout<<solve(arr,3)<<endl;

    return 0;
}