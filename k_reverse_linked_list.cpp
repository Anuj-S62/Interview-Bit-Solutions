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

ListNode* reverseList(ListNode* A, int B) {
    ListNode*mh=new ListNode(0),*mt=mh,*h=NULL,*t=h,*p=A,*nxt=NULL;

    while(p!=NULL)
    {
        int b=B;
        h=NULL;t=NULL;
        while(b--)
        {
            nxt=p->next;
            p->next=h;
            h=p;
            if(t==NULL)t=h;
            p=nxt;
        }
        mt->next=h;
        mt=t;
        mt->next=NULL;
    }

    return mh->next;
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
    reverseList(l1,3);

    return 0;
}