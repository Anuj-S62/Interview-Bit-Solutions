#include<bits/stdc++.h>
using namespace std;

void show(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}
int solve(vector<int> &A, int B) {
    int count = 0;
    int sum = 0;
    vector<int> sum_array={0};
    for(int i=0;i<A.size();i++){
        sum += A[i];
        sum_array.push_back(sum);
    }
    for(int i=0;i<A.size();i++){
        for(int j=i+1;j<=A.size();j++){
            if(sum_array[j]-sum_array[i] < B) count++;
            else break;
        }
    }
    return count;
}

// int solve(vector<int> &A, int B) {
//     int N = A.size();
//     vector<int> psums(N+1);
//     for (int i=0; i < N; i++) {
//         psums[i+1] = psums[i] + A[i];
//     }
//     show(psums);
//     int ret = 0;
//     for (int i=0; i < N; i++) {
//         for (int j=i+1; j <= N; j++) {
//             if ((psums[j]-psums[i]) < B)
//                 ret++;
//             else break;
//         }
//     }
//     return ret;
// }

int main(){
    // vector<int> a = {8, 5, 1, 10, 5, 9, 9, 3, 5, 6, 6, 2, 8, 2, 2, 6, 3, 8, 7, 2, 5, 3, 4, 3, 3, 2, 7, 9, 6, 8, 7, 2, 9, 10, 3, 8, 10, 6, 5, 4, 2, 3, 4, 4, 5, 2, 2, 4, 9, 8, 5 };
    vector<int> a = {2,5,6};
    cout<<solve(a,10)<<endl;

    return 0;
}