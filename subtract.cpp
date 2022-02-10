#include<bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

ListNode* subtract(ListNode* A) {
    ListNode* ptr=A;
    int size=1;
    while(ptr->next!=NULL){
        size++;
        ptr=ptr->next;
    }
    ptr=A;
    int x=size/2;
    ListNode* mid=A;
    for(int i=0;i<x;i++){
        mid=mid->next;
    }
    if(size%2==1){
        mid=mid->next;
    }
    vector<int> arr;
    for(int i=0;i<(size/2);i++){
        arr.push_back(mid->val);
        mid=mid->next;
    }
    for(int i=arr.size()-1;i>=0;i--){
        ptr->val=arr[i]-ptr->val;
        ptr=ptr->next;
    }
    return A;
}

int main(){
    

    return 0;
}