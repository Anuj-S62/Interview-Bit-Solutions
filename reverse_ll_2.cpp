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

         ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head->next) return head;
        if(left==right) return head;
        ListNode* ptr1 = head;
        ListNode* ptr2 = head;
        ListNode* ptr3 = head;
        ListNode* ptri = head;
        ListNode* ptrf = head;

        for(int i =0;i<left-2;i++){
            ptri = ptri->next;
        }
        for(int i = 0;i<right-1;i++){
            ptrf=ptrf->next;
        }
        ptr3 = ptrf;
        ptrf = ptrf->next;
        ptr3->next = nullptr;
        ptr1 = ptri->next;
        if(left==1) ptr1 = head;
        ptr1 = reverseList(ptr1);
        ptr2 = ptr1;
        while(ptr2->next){
            ptr2 = ptr2->next;
        }
        if(left==1 && !ptrf) return ptr1; 
        if(left!=1)ptri->next = ptr1;
        ptr2->next = ptrf;
        if(left==1) return ptr1;
        return head;
        
    }
int main(){
    ListNode*head = new ListNode(1);
    ListNode*head2 = new ListNode(2);
    ListNode*head3 = new ListNode(3);
    // ListNode*head4 = new ListNode(4);
    // ListNode*head5 = new ListNode(5);
    head->next = head2;
    head2->next = head3;
    // head3->next = head4;
    // head4->next = head5;
    // head->next = head2;
    show(head);
    head = reverseBetween(head,1,2);
    show(head);


    return 0;
}