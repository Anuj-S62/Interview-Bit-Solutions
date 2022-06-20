#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *show(struct ListNode *top)
{
    if (top == NULL)
    {
        printf("stack under flow\n");
        return top;
    }
    else
    {
        ListNode *ptr = top;
        while (ptr != NULL)
        {
            // cout<<"hello"<<endl;
            if (ptr->next != nullptr)
                cout << ptr->val << "-> ";
            else
                cout << ptr->val;
            ptr = ptr->next;
        }
    }
    printf("\n");
    return top;
}

ListNode* partition(ListNode* head, int x) {
    ListNode* ptr = head;
    ListNode* ptr1 = head;
    ListNode* ptr2 = head;
    ListNode* ptr3 = head;
    ListNode* ptr4 = head;
    ListNode* ptr5 = head;
    
    while(ptr1->next->val < x) ptr1 = ptr1->next;
    ptr2 = ptr1;
    ptr2 = ptr1->next;
    ptr3 = ptr2;
    ptr = ptr2;
    while(ptr){
        if(ptr->next and ptr->next->val<x){
            ptr3 = ptr;
            ptr4 = ptr3->next;
            ptr5 = ptr4;
            while(ptr5->next and ptr5->next->val<x) ptr5 = ptr5->next;
            // cout<<ptr5->val<<endl;
            // ptr1->next = ptr3->next;
            // ptr3->next = ptr4->next;
            // ptr4->next = ptr2;
            // ptr1 = ptr4;
            // ptr = ptr5;
            // // ptr3->next = ptr5->next;
            // // ptr5->next = ptr2;
            // // ptr1 = ptr5;
            // // ptr = ptr5;

            ptr = ptr5->next;
            ptr1->next = ptr4;
            ptr3->next = ptr5->next;
            ptr5->next = ptr2;
            ptr1 = ptr5;
            ptr2 = ptr1->next;
            // ptr = ptr2;
            // show(head);
            continue;
        }
        ptr = ptr->next;   
    }
    // show(head);
    return head;
}

//  1  4  3  2  5  2
//  p1 p2 p3 p4 p5
// 

int main(){
    // ListNode* head = new ListNode;
    // head->val = 1;
    // ListNode* n1 = new ListNode;
    // n1->val = 4;
    // ListNode* n2 = new ListNode;
    // n2->val = 3;
    // ListNode* n = new ListNode;
    // n->val = 2;
    // ListNode* n3 = new ListNode;
    // n3->val = 2;
    // ListNode* n4 = new ListNode;
    // n4->val = 5;
    // ListNode* n5 = new ListNode;
    // n5->val = 2;
    // head->next = n1;
    // n1->next = n2;
    // n2->next = n;
    // n->next = n3;
    // n3->next = n4;
    // n4->next = n5;
    // n5->next = NULL;

    ListNode* n = new ListNode(1,nullptr);
    ListNode* head = new ListNode(2,n);
    head = show(head);
    head = partition(head,4);
   show(head);

    return 0;
}