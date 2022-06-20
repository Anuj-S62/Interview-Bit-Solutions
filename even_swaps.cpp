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


ListNode* solve(ListNode* A) {
    show(A);
    ListNode* ptr1=A;
    ListNode* ptr2=A;
    ListNode* mid=A;
    int size=0;
    while(ptr1){
        size++;
        ptr1=ptr1->next;
    }
    ptr1=A;
    if(size<4)return A;
    // ptr1=ptr1->next;
    ptr2=ptr2->next;
    mid=mid->next->next;;

    for(int i=0;i<size/2-1;i++){
        ptr1->next=ptr1->next->next->next;
        ptr2->next=ptr2->next->next->next;
        ptr1=ptr1->next;
        mid->next=ptr2;
        ptr1->next=mid;
        if(i!=(size/2-2)){
            mid=mid->next->next;
            ptr1=ptr1->next;
        }
    }
    show(A);
    return A;
    
}


int main(){
    ListNode *l1 = new ListNode(0);
    l1->val = 1;
    ListNode *ptr = l1;
    int a = 2;
    for (int i = 0; i < 5; i++)
    {
        ListNode *temp = new ListNode(0);
        temp->val = a;
        ptr->next = temp;
        ptr = ptr->next;
        a++;
    }
    solve(l1);

    return 0;
}