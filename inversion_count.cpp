#include<bits/stdc++.h>
using namespace std;

void disp(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int merge(vector<int> &A,int low,int mid,int high){
    int i = low;
    int j = mid;
    int k = mid+1;
    int l = high;
    int count = 0;
    vector<int> temp;
    while(i<=j && k<=l){
        if(A[i]<=A[k]){
            temp.push_back(A[i]);
            i++;
        }
        else if(A[i]>A[k]){
            temp.push_back(A[k]);
            k++;
            count = count + j-i+1;
        }
    }
    if(i<=j){
        while(i<=j){
            temp.push_back(A[i]);
            i++;
        }
    }
    else if(k<=l){
        while(k<=l){
            temp.push_back(A[k]);
            k++;
        }
    }
    int x = 0;
    while(low<=high){
        A[low] = temp[x];
        x++;
        low++;
    }
    return count;
}

int mergeSort(vector<int> &arr,int low,int high){
    int inv_count = 0;
    if(low<high){
        int mid = (low + high)/2;
        inv_count += mergeSort(arr,low,mid);
        inv_count += mergeSort(arr,mid + 1,high);
        inv_count += merge(arr,low,mid,high);
    }
    return inv_count;
}

int main(){
    // vector<int> arr = {1,3,2,5,1,4,2,7,0,4,6,5262,-153673,376,62,8,426,7242,-66897,0};
    // vector<int> arr = {3,4,2,4,6,3,5,8,5,3,4,6,7,8,9,66533,3,6,7,4,6,8,5,2,5,7,7,7,777,7,7,5,-345,5,7,7,5,4,0,0,87,1,-9,1};
    // cout<<a.size()<<endl;
    vector<int> arr = {5,3,2,4,1};
    cout<<mergeSort(arr,0,arr.size()-1)<<endl;
    disp(arr); 
    // cout<<a.size()<<endl;
    // disp(a);

    return 0;
}