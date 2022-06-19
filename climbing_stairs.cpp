#include<bits/stdc++.h>
using namespace std;

void show(vector<int> res){
    for(int i = 0;i<res.size();i++){
        cout<<res[i]<<", ";
    }
    cout<<endl;
}

int ans(vector<int> &arr,int x){
    if(x>=arr.size()){
        return 0;
    }
    if(x+2 < arr.size()){
        cout<<x+2<<endl;
        return arr[x] + min(ans(arr,x+1) , ans(arr,x+2));
    }
    return arr[x] + ans(arr,x+1);
}

void ans2(vector<int> &arr,int x,vector<int> &res,int *sum){
    if(x >= arr.size()){
        res.push_back((*sum));
        return;
    }
    (*sum) = (*sum) + arr[x];
    if(x+2<arr.size()){
        cout<<"helo"<<endl;
        ans2(arr,x+2,res,sum);
        ans2(arr,x+1,res,sum);
    }

}


int main(){
    vector<int> arr = {54 ,5 ,68 ,68 ,94, 39, 52, 84, 4, 6, 53, 68, 1, 39, 7, 42, 69, 59, 94, 85, 53, 10, 66, 42, 71, 92, 77, 27, 5, 74, 33, 64, 76, 100, 37, 25, 99, 73, 76, 66, 8, 64, 89, 28, 44, 77, 48, 24, 28, 36, 17, 49, 90, 91, 7 };
    vector<int> res;
    // cout<<ans(arr,0)<<endl;
    ans2(arr,0,res,0);
    sort(res.begin(),res.end());
    show(res);
    // cout<<arr.size()<<endl;

    return 0;
}