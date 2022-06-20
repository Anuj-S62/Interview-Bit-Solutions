#include<bits/stdc++.h>
using namespace std;

void show(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

vector<int> solve(vector<int> &A) {
    vector<int> arr;
    int x = 1e9 + 7;
    unordered_map<int* ,int>  mp;
    for(int i=0;i<A.size();i++){
        if(mp.find(&A[i])!=mp.end()){
            mp[&A[i]]++;
        }
        else{
            mp[&A[i]] = 1;
        }
    }
    unordered_map<int* ,int> :: iterator itr = mp.begin();
    for(int i=0;i<A.size();i++){
        unsigned long long int prod = 1;
        while(itr!=mp.end()){
            if((*itr).first==&A[i]) itr++;
            else{
                for(int j = 0;j<(*itr).second;j++){
                    int y = *((*itr).first);
                    prod *= y;
                    prod = prod % x;
                }
                itr++;
            }
        }
        itr = mp.begin();
        arr.push_back(prod);
    }
    // show(arr);
    return arr;
}


int main(){
    vector<int> arr = {1,2,3,4};
    solve(arr);

    return 0;
}