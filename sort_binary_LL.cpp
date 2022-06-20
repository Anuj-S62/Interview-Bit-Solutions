#include<bits/stdc++.h>
using namespace std;


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* solve(ListNode* A) {
    int count1 = 0;
    int count0 = 0;
    ListNode* ptr = A;
    while(ptr){
        if(ptr->val==1) count1++;
        else count0++;
        ptr = ptr->next;
    }
    ptr = A;
    while(ptr){
        if(count0){
            ptr->val = 0;
            ptr=ptr->next;
            count0--;
            continue;
        }
        ptr->val = 1;
        ptr= ptr->next;
    }
    return A;
}


int main(){
    

    return 0;
}