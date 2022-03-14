#include<bits/stdc++.h>
using namespace std;

int solve(string A, int B) {
    int max_count = 0;
    int temp_count = 0;
    int k=0;
    for(int i=0;i<A.size();i++){
        if(k<B){
            if(A[i]=='a') temp_count++;
            k++;
        }
        if(k==B){
            max_count = max(max_count,temp_count);
            temp_count = 0;
            k=0;
        }
    }
    max_count = max(max_count,temp_count);
    return max_count;
}

int main(){
    cout<<solve("baab",2)<<endl;

    return 0;
}