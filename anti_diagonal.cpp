#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > diagonal(vector<vector<int> > &A) {
    vector<vector<int>> res;
    for(int i=0;i<(A.size())*2-1;i++){
        if(i<A.size()){
            vector<int> temp;
            int x=0;
            int y=i;
            for(int j=0;j<i+1;j++){
                temp.push_back(A[x][y]);
                x++;
                y--;
            }
            res.push_back(temp);
        }
        else{
            vector<int> temp;
            int x=(i+1)%(A.size());
            int y=A.size()-1;
            for(int j=0;j<A.size()-((i+1)%A.size());j++){
                temp.push_back(A[x][y]);
                x++;
                y--;
            }
            res.push_back(temp);
        }
    }
    return res;
}


int main(){
    

    return 0;
}