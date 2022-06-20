#include<bits/stdc++.h>
using namespace std;


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* rev(ListNode* prev,ListNode* ptr1,ListNode* ptr2){
    ptr2 = ptr2->next;
    ptr1->next = prev;
    prev = ptr1;
    ptr1 = ptr2;
    if(!ptr1) return prev;
    return rev(prev,ptr1,ptr2);
}

ListNode* reverseList(ListNode* A) {
    if(!A->next) return A;
    ListNode * prev = NULL;
    ListNode * ptr1 = A;
    ListNode * ptr2 = A;
    A = rev(prev,ptr1,ptr2);
    
    return A;
}

int main(){
    

    return 0;
}