#include<bits/stdc++.h>
using namespace std;

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

ListNode* rotateRight(ListNode* A, int B) {
    // show(A);
    ListNode* p=A;
    ListNode* q=A;
    ListNode* head=A;
    ListNode* x=A;
    
    int size=1;
    while(x->next){
        size++;
        x=x->next;
    }
    B=B % size;
    for(int i=0;i<size-B-1;i++){
        q=q->next;
        head=head->next;
    }
    head=head->next;
    q->next=NULL;
    x->next=p;
    // show(head);
    return head;

}

int main(){
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
    rotateRight(l1,6);
    return 0;
}