#include<bits/stdc++.h>
using namespace std;

int searchMatrix(vector<vector<int> > &A, int B) {
    if(A.size()==1 && B==A[0][0])return 1;
    else if(A.size()==1 && B!=A[0][0]) return 0;

    int lowMain=0;
    int highMain = A.size()-1;
    int midMain = (lowMain+highMain)/2;
    int i=midMain;
    int prev;
    if(B>A[highMain][A[0].size()-1] || B<A[lowMain][0]) return 0;
    
    while(lowMain<highMain){
        if(B>=A[i][0] && B<=A[i][A[0].size()-1]){
            break;
        }
        if(B>=A[midMain][0] && B<=A[midMain][A[0].size()-1]){
            i=midMain;
            break;
        }
        if(A[lowMain][0]==B || A[highMain][0]==B || A[midMain][0]==B) return 1;
        else if(A[midMain][0]>B){
            highMain=midMain-1;
            i=midMain-1;
        }
        else if(A[midMain][A[0].size()-1]<B){
            i=midMain+1;
            lowMain=midMain+1;
        }
        if(B>A[midMain][A[0].size()-1] && B<A[midMain+1][0]) return 0;
        prev=midMain;
        midMain = (lowMain+highMain)/2;
        // cout<<lowMain<<" "<<midMain<<" "<<highMain<<endl;
    } 
    if(A[i][0]==B)return 1;
    int high=A[0].size()-1;
    int low=0;
    int mid=(low + high)/2;
    while(low<high){
        if(A[i][low]==B || A[i][high]==B || A[i][mid]==B)return 1;
        else if(A[i][mid]>B) high = mid-1;
        else low=mid+1;
        mid = (low + high)/2;
    }

    return 0;
}


int main(){
    vector<vector<int>> mat={
  {2, 3, 4, 6},
  {16, 19, 33, 36},
  {37, 38, 38, 41},
  {47, 47, 50, 51},
  {55, 57, 58, 62},
  {63, 65, 66, 66},
  {68, 70, 75, 77},
  {78, 84, 84, 86},
  {86, 87, 88, 92},
  {94, 95, 96, 97}
};
    cout<<searchMatrix(mat,81)<<endl;

    return 0;
}