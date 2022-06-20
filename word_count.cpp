#include<bits/stdc++.h>
using namespace std;

int solve(string A) {
    int i = 0;
    int count = 0;
    bool flag = true;
    for(int j = 0;j<A.length();j++){
        if(A[j]!=' '){
            flag = false;
            break;
        }
    }
    if(flag) return 0;
    if(A[i]==' '){
        while(A[i]==' ')i++;
    }
    while(i<A.length()){
        if(A[i]==' '){
            while(A[i]==' ') i++;
            if(i<A.length() && A[i]!=' ')count++;
            continue;
        }
        i++;
    }

    count++;
    return count;
}

int main(){
    cout<<solve("   ")<<endl;

    return 0;
}