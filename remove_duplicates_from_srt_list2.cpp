#include<bits/stdc++.h>
using namespace std;


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
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

ListNode* deleteDuplicates(ListNode* A) {
    if (!A && !A->next) {
        return A;
    }
    ListNode *pre = new ListNode(0);
    pre->next = A;
    A = pre;
    ListNode *temp = A, *temp1;
    while (temp->next) {
        temp1 = temp->next;
        while (temp1->next && temp1->val == temp1->next->val) {
            temp1 = temp1->next;
        }
        if (temp1 != temp->next) {
            temp->next = temp1->next;
        } else {
            temp = temp->next;
        }
    }
    return A->next;
}

int main(){
    // ListNode* A1 = new ListNode(0);
    ListNode* A2 = new ListNode(1);
    ListNode* n1 = new ListNode(1);
    ListNode* n2 = new ListNode(1);
    // ListNode* n3 = new ListNode(2);
    ListNode* n4 = new ListNode(3);
    ListNode* n5 = new ListNode(3);
    ListNode* n6 = new ListNode(3);
    // ListNode* n7 = new ListNode(4);
    // A1->next = A2;
    A2->next = n1;
    n1->next = n2;
    n2->next = n4;
    // n3->next = n4;
    n4->next = n5;
    n5->next = n6;
    // n6->next = n7;
    // show(A1);
    A2 = deleteDuplicates(A2);
    if(!A2) cout<<"hel"<<endl;

    return 0;
}