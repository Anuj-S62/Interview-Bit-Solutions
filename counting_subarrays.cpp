#include<bits/stdc++.h>
using namespace std;

// int solve(vector<int> &A, int B) {
//     int i = 0;
//     int j = 0;
//     int count = 0;
//     int sum = 0;
//     while(i<A.size() && j<A.size()){
//         if(i == j){
//             sum = A[i];
//             j++;
//         }
//         if(sum < B){
//             count++;
//             sum = sum + A[j];

//         }
//         else if(sum > B){
//             sum = sum - A[i];
//             i++;
//         }
//         else{
//             j++;
//             sum += A[j];
//         }
//     }
//     return count;
// }

int solve(vector<int> &A, int B) {
    int N = A.size();
    vector<int> psums(N+1);
    for (int i=0; i < N; i++) {
        psums[i+1] = psums[i] + A[i];
    }
    int ret = 0;
    for (int i=0; i < N; i++) {
        for (int j=i+1; j <= N; j++) {
            if ((psums[j]-psums[i]) < B)
                ret++;
            else break;
        }
    }
    return ret;
}

int main(){
    vector<int> a = {8, 5, 1, 10, 5, 9, 9, 3, 5, 6, 6, 2, 8, 2, 2, 6, 3, 8, 7, 2, 5, 3, 4, 3, 3, 2, 7, 9, 6, 8, 7, 2, 9, 10, 3, 8, 10, 6, 5, 4, 2, 3, 4, 4, 5, 2, 2, 4, 9, 8, 5 };
    cout<<solve(a,32)<<endl;

    return 0;
}