#include<bits/stdc++.h>
using namespace std;

int check(int x){
    if(x==2){
      return 1;
    }
    for(int i=2;i<sqrt(x);i++){
        if(x%i==0){
            return 0;
        }
    }
    return 1;
}
vector<int> primesum(int A) {
    int x=2;
    int y=A-x;
    int i=2;
    while(!check(x) || !check(y) || x>y){
        x++;
        y=A-x;
    }
    vector<int> arr={x,y};
    return arr;
}

int main(){
  vector<int> arr=primesum(10);
  cout<<arr[0]<<" ,"<<arr[1]<<endl;
  return 0;
}