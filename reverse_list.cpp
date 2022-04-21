#include <bits/stdc++.h>
using namespace std;

//  Definition for singly-linked list.
struct ListNode
{
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

// ListNode* reverseList(ListNode* A) {
//     ListNode * ptr1 = A;
//     ListNode * ptr2 = A;
//     ListNode * ptr3 = A;
//     ptr2 = ptr2->next;
//     ptr3 = ptr3->next;
//     ptr1->next = NULL;
//     while(ptr3->next){
//         ptr3 = ptr3->next;
//         ptr2->next = ptr1;
//         ptr1 = ptr2;
//         ptr2 = ptr3;    
//     }
//     A = ptr1;
//     ptr3->next = A;
//     A = ptr3;
//     return A;
// }
ListNode* reverseList(ListNode* A) {
    if (!A) {
        return A;
    }
    ListNode *first, *rest;
    first = A;
    rest = first->next;
    if (!rest) {
        return A;
    }
    rest = reverseList(rest);
    show(rest);
    first->next->next = first;
    first->next = NULL;
    return rest;
}

int main()
{
    ListNode *l1 = new ListNode(0);
    l1->val = 1;
    ListNode *ptr = l1;
    int a = 2;
    for (int i = 0; i < 4; i++)
    {
        ListNode *temp = new ListNode(0);
        temp->val = a;
        ptr->next = temp;
        ptr = ptr->next;
        a++;
    }
    show(l1);
    l1 = reverseList(l1);
    show(l1);

    return 0;
}