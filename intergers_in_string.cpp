#include<bits/stdc++.h>
using namespace std;

vector<int> show(vector<int> ans){
    for(int i =0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

vector<int> solve(string A) {
    vector<int> ans;
    int i = 0;
    while(i<A.length()){
       if(A[i]!=','){
           int x = A[i] - 48;
           i++;
           int y = 10;
            while(A[i]!=',' && i<A.length()){
                x = x*y;
                x = x+(A[i] - 48);
                i++;
            }
            cout<<x<<endl;
            ans.push_back(x);
       }
       i++;
    }
    return  ans;
}


int main(){
    solve("1,22,3");

    return 0;
}