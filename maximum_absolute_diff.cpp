#include<bits/stdc++.h>
using namespace std;

int maxArr(vector<int> &a) {
    long long max1= -1e9 , max2 = -1e9 , min1= 1e9 , min2=1e9 ;
    for(long long i=0 ; i<a.size() ; i++)
    {
        max1 = max(max1 , a[i]+i);
        max2 = max(max2 , a[i]-i);
        min1 = min(min1 , a[i]+i);
        min2 = min(min2 , a[i]-i);
    }
    return max(max1-min1 , max2-min2) ;
}


int main(){
    

    return 0;
}