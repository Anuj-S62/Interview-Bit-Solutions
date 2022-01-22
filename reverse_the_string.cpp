#include<bits/stdc++.h>
using namespace std;

string solve(string A) {
    if(A.length()==1){
        return A;
    }
    vector<string> arr;
    string temp;
    for(int i=0;i<A.length();i++){
        if(A[i]==' '){
          if(temp.length()==0){
            continue;
          }
            arr.push_back(temp);
            temp.clear();
            continue;
        }
        temp=temp+A[i];
    }
    if(temp.length()!=0){
    arr.push_back(temp);
    }
    string res;
    for(int i=arr.size()-1;i>0;i--){
        res=res+arr[i]+" ";
    }
    res=res+arr[0];
    return res;
}

int main(){
  string A="       fwbpudnbrozzifml osdt ulc jsx kxorifrhubk ouhsuhf sswz qfho dqmy sn myq igjgip iwfcqq                 ";
  cout<<solve(A);

  return 0;
}
