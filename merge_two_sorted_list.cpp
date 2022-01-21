#include<bits/stdc++.h>
using namespace std;


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* mergeTwoLists(ListNode* A, ListNode* B) {
    ListNode* ptr1=A;
    ListNode* ptr2=B;
    ListNode* res=new ListNode(0);
    ListNode* resptr=res;

    while(ptr1!=NULL || ptr2!=NULL){
        if(ptr1==nullptr && ptr2!=nullptr){
            ListNode* node=new ListNode(ptr2->val);
                resptr->next=node;
                resptr=resptr->next;
                ptr2=ptr2->next;
                continue;
        }
        if(ptr2==nullptr && ptr1!=nullptr){
            ListNode* node=new ListNode(ptr1->val);
                resptr->next=node;
                resptr=resptr->next;
                ptr1=ptr1->next;
                continue;
        }
        if(ptr1->val < ptr2->val){
            ListNode* node=new ListNode(ptr1->val);
                resptr->next=node;
                resptr=resptr->next;
                ptr1=ptr1->next;
                continue;
        }
        else{
            ListNode* node=new ListNode(ptr2->val);
                resptr->next=node;
                resptr=resptr->next;
                ptr2=ptr2->next;
                continue;
        }
    }
    res=res->next;
    return res;
}


int main(){
    

    return 0;
}