#include<bits/stdc++.h>
using namespace std;


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode * show(struct ListNode *top)
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

ListNode* swapPairs(ListNode* A) {
    // show(A);
    ListNode* ptr1=A;
    ListNode* ptr2=A;
    int size=0;
    while(ptr1){
        size++;
        ptr1=ptr1->next;
    }
    if(size==1)return A;
    ptr2=ptr2->next;
    ptr1=A;
    ptr1->next=ptr1->next->next;
    ptr2->next=ptr1;
    A=ptr2;
    for(int i=0;i<size/2-1;i++){
        if(ptr2->next==ptr1){
            ptr2=ptr2->next->next;
            ptr1->next=ptr1->next->next;
            ptr1=ptr1->next;
            ptr2->next=ptr1->next;
            ptr1->next=ptr2;
        }
        else{
            ptr1=ptr1->next->next;
            ptr2->next=ptr2->next->next;
            ptr2=ptr2->next;
            ptr1->next=ptr2->next;
            ptr2->next=ptr1;
        }
    }
    return A;
}



int main(){
    ListNode *l1 = new ListNode(0);
    l1->val = 3;
    ListNode *ptr = l1;
    int a = 5;
    for (int i = 0; i < 4; i++)
    {
        ListNode *temp = new ListNode(0);
        temp->val = a;
        ptr->next = temp;
        ptr = ptr->next;
        a++;
    }
    swapPairs(l1);

    return 0;
}