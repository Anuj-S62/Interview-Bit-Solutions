#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > prettyPrint(int a) {
    vector<vector<int>> arr;

    for(int i=a;i>1;i--){
    vector<int> temp;
    for(int j=0;j<a-i+1;j++){
        temp.push_back(a-j);
    }
    for(int j=0;j<2*i-3;j++){
        temp.push_back(i);
    }
    for(int j=i;j<=a;j++){
        temp.push_back(j);
    }
    arr.push_back(temp);
}
    {
    vector<int> temp;
    int x=a;
    for(int i=0;i<a-1;i++){
        temp.push_back(x);
        x--;
    }
    temp.push_back(1);
    for(int i=2;i<=a;i++){
        temp.push_back(i);
    }
    arr.push_back(temp);
    }
    {
    for(int i=0;i<a-1;i++){
        vector<int> temp=arr[a-2-i];
        arr.push_back(temp);
    }
    }
    return arr;

}

void display(vector<vector<int>> arr){
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr.size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}



int main(){
    display(prettyPrint(5));

    return 0;
}