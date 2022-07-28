#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
class LRUCache{
    public:
        LRUCache(int capacity);
        int get(int key);
        void set(int key,int val);
};

queue<int> que;
int cap;
unordered_map<int,int> arr;

LRUCache::LRUCache(int capacity) {
    int x = que.size();
    while(x--) que.pop();
    arr.erase(arr.begin(),arr.end());
    cap = capacity;
}

int LRUCache::get(int key) {
    if(arr.find(key)==arr.end()) return -1;
    queue<int> tempQue;
        while(que.size()){
            if(que.front()!=key) tempQue.push(que.front());
            que.pop();
        }
        tempQue.push(key);
        que = tempQue;
    return arr[key];
}

void LRUCache::set(int key, int value) {
    if(arr.find(key)!=arr.end()){
        queue<int> tempQue;
        while(que.size()){
            if(que.front()!=key) tempQue.push(que.front());
            que.pop();
        }
        tempQue.push(key);
        que = tempQue;
        arr[key] = value;
        return ;
    }
    if(arr.size()>=cap){
        arr.erase(que.front());
        que.pop();
    }
    arr[key] = value;
    que.push(key);
}

 
int main(){
    LRUCache a(2);
    cout<<a.get(2)<<endl;
    a.set(2,6);
    cout<<a.get(1)<<endl;
    a.set(1,5);
    a.set(1,2);
    cout<<a.get(1)<<endl;
    cout<<a.get(2)<<endl;
    
//     // cout<<a.get(1)<<" "<<a.get(3)<<" "<<a.get(4)<<endl;
 
// // 7 2 G 2 S 2 6 G 1 S 1 5 S 1 2 G 1 G 2
    
    // LRUCache b(2);
    // b.set(2,1);
    // b.set(1,1);
    // b.set(2,3);
    // b.set(4,1);
    // cout<<b.get(1)<<endl;
    // cout<<b.get(2)<<endl;


// 6 2 S 2 1 S 1 1 S 2 3 S 4 1 G 1 G 2

    return 0;
}