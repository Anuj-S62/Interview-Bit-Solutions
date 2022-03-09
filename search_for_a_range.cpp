#include<bits/stdc++.h>
using namespace std;

void disp(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int left(vector<int> arr,int low,int high,int B){
    if(arr[low]==B) return low;
    else{
        int mid = (low + high)/2;
        if(mid == low) return low+1;
        if(arr[mid]<B) return left(arr,mid + 1,high,B);
        if(arr[mid]==B) return left(arr,low,mid,B);
    }
}

int right(vector<int> arr,int low,int high,int B){
    if(arr[high]==B) return high;
    else{
        int mid = (low + high)/2;
        if(mid == low) return low;
        if(arr[mid]>B) return right(arr,low,mid,B);
        if(arr[mid]==B) return right(arr,mid,high,B);
    }
}

vector<int> searchRange(const vector<int> &A, int B) {
      int low=0;
    int high = A.size()-1;
    int mid = (low+high)/2;
    int a=-1,b=-1;
    if(A[low]==B) a=low;
    if(A[high]==B) b = high;
    while(low<high){
        if(A[low]==B){
            if(a==-1){
                 a = left(A,0,low,B); 
            }       
            if(b==-1) b = right(A,low,high,B);   
            break; 
        }
        if(A[high]==B){
            if(a==-1){
                 a = left(A,low,high,B); 
            }       
            if(b==-1) b = right(A,high,A.size()-1,B);   
            break; 
        }
        if(A[mid]<B) low = mid+1;
        else if(A[mid]>B) high = mid-1;
        else if(A[mid] == B){ 
            if(a==-1){
                 a = left(A,low,mid,B); 
            }       
            if(b==-1) b = right(A,mid,high,B);   
            break;     
        }
        mid = (low+high)/2;
    }
    vector<int> arr = {a,b};
    // disp(arr);
    return arr;
}

int main(){
    // vector<int> arr = {1,2,3,4,8,8,8};
    vector<int> arr = { 1, 2, 6, 9, 9 };
    // cout<<left(arr,0,6,8)<<endl;
    // cout<<right(arr,6,10,8)<<endl;
    searchRange(arr,2);
    // vector<int> t = {1};
    // cout<<left()

    return 0;
}