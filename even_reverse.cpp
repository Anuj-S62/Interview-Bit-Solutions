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


// ListNode* solve(ListNode* A) {
//     // show(A);
//     ListNode* ptr1=A;
//     ListNode* ptr2=A;
//     ListNode* mid=A;
//     int size=0;
//     while(ptr1){
//         size++;
//         ptr1=ptr1->next;
//     }
//     int x=size;
//     if(x<4 && x!=-1)return A;
//     while(x>=4){
//         ptr1=A;
//         mid=A;
//         ptr2=A;
//         ptr2=ptr2->next;
//         mid=mid->next->next;

//         for(int i=0;i<x/2-1;i++){
//             ptr1->next=ptr1->next->next->next;
//             ptr2->next=ptr2->next->next->next;
//             ptr1=ptr1->next;
//             mid->next=ptr2;
//             ptr1->next=mid;
//             if(i!=(x/2-2)){
//                 mid=mid->next->next;
//                 ptr1=ptr1->next;
//         }
//     }
//     x=x-2;
//     }
//         show(A); 
//     return A;  
// }
ListNode* reverse(ListNode* head){
    // show(head);
    ListNode * p=head;
    ListNode * q=head;
    ListNode * tail=head;
    int size=1;
    while(tail->next){
        tail=tail->next;
        size++;
    }
    q=q->next;
    for(int i=0;i<size-1;i++){
        p->next=tail->next;
        tail->next=p;
        p=q;
        q=q->next;
    }
    head=tail;
    // show(head);
    return head;

}


ListNode* solve(ListNode* A){
    ListNode *odd=new ListNode(0);
    ListNode *even=new ListNode(0);

    ListNode* ptr=A;
    odd->val=ptr->val;
    ptr=ptr->next;
    even->val=ptr->val;

    int count=3;
    ListNode *even_ptr=even;
    ListNode *odd_ptr=odd;
    ptr=ptr->next;
    while(ptr){
        if((count%2)==1){
            ListNode *odd_node=new ListNode(0);  
            odd_node->val=ptr->val;
            odd_ptr->next=odd_node;
            odd_ptr=odd_ptr->next;
            ptr=ptr->next;
        }
        else{
            ListNode *even_node=new ListNode(0);  
            even_node->val=ptr->val;
            even_ptr->next=even_node;
            even_ptr=even_ptr->next;
            ptr=ptr->next;
        }
        count++;
    }
    // show(A);
    even = reverse(even);
    ptr=A;
    ListNode * res = new ListNode(0);
    ListNode * resptr = res;
    res->val=odd->val;
    odd=odd->next;
    count=2;
    while(ptr->next){
        if(count%2==1){
            ListNode * temp = new ListNode(odd->val);
            resptr->next=temp;
            resptr=resptr->next;
            odd=odd->next;
        }
        else{
            ListNode * temp = new ListNode(even->val);
            resptr->next=temp;
            resptr=resptr->next;
            even=even->next;
        }
        ptr=ptr->next;
        count++;
    }
    // show(res);
    return res;
} 


int main(){
    ListNode *l1 = new ListNode(0);
    l1->val = 1;
    ListNode *ptr = l1;
    int a = 2;
    for (int i = 0; i < 9; i++)
    {
        ListNode *temp = new ListNode(0);
        temp->val = a;
        ptr->next = temp;
        ptr = ptr->next;
        a++;
    }
    l1=solve(l1);
    show(l1);

    return 0;
}