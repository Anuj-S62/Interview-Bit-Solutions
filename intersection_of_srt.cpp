#include<bits/stdc++.h>
using namespace std;

void disp(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

vector<int> intersect(const vector<int> &A, const vector<int> &B) {
    vector<int> intersection;
            int n1 = A.size();
            int n2 = B.size();
            int i = 0, j = 0;
            while (i < n1 && j < n2) {
                if (A[i] > B[j]) {
                    j++;
                } else if (B[j] > A[i]) {
                    i++;
                } else {
                    intersection.push_back(A[i]);
                    i++;
                    j++;
                }
            }
            return intersection;
        }  


int main(){
    vector<int> A={ 1, 1, 1, 3, 4, 4, 4, 7, 8, 9, 12, 14, 19, 22, 25, 26, 28, 31, 32, 34, 34, 34, 36, 36, 38, 39, 39, 39, 41, 42, 42, 43, 43, 43, 45, 45, 47, 49, 49, 50, 50, 52, 53, 54, 55, 56, 57, 60, 60, 62, 63, 65, 67, 72, 74, 74, 75, 75, 78, 78, 79, 80, 80, 80, 80, 80, 82, 83, 83, 83, 84, 85, 85, 86, 86, 86, 87, 88, 88, 88, 90, 90, 91, 92, 93, 93, 93, 96, 96, 97, 97, 98, 98, 99, 100};
    vector<int> B={13, 13, 24, 24, 27, 37, 43, 61, 61, 62, 66, 69, 69, 71, 71, 79, 87};
    vector<int> res=intersect(A,B);
    // cout<<res.size();
    disp(res);


    return 0;
}