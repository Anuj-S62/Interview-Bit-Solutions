#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int trap(const vector<int> &A) {
    vector<int> left;
    vector<int> right;

    left.push_back(A[0]);
    right.push_back(A[A.size()-1]);

    for(int i = 1;i<A.size();i++) left.push_back(max(left[left.size()-1],A[i]));

    for(int i = A.size()-2;i>=0;i--) right.push_back(max(right[right.size()-1],A[i]));
    reverse(right.begin(),right.end());

    int water = 0;
    for(int i = 0;i<A.size();i++) water += min(left[i],right[i])-A[i];
    return water;
}
 

int main(){
    vector<int > arr = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 };
    trap(arr);
    // arr =   0 1 0 2 1 0 1 3 2 1 2 1 
    // left=   0 1 1 2 2 2 2 3 3 3 3 3
    // right=  3 3 3 3 3 3 3 3 2 2 2 1
// water at i= 0 0 1 0 1 2 1 0 0 1 0 0
// net water = 6



    return 0;
}