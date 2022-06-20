#include<bits/stdc++.h>
using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

ListNode* deleteDuplicates(ListNode* A) {
    ListNode* ptr=A;
    while(ptr->next!=NULL){
        if(ptr->val==ptr->next->val){
            ListNode * temp=ptr->next;
            ptr->next=ptr->next->next;
            delete temp;
        }
        else{
            ptr=ptr->next;
        }
    }
    return A;
}

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

int main(){
    ListNode* top = new ListNode(0);
    top->val=1;
    ListNode* ptr = top;
    ListNode* temp = new ListNode(0);
    temp->val=1;
    ptr->next=temp;
    ptr=ptr->next;
    ListNode* temp2 = new ListNode(0);
    temp2->val=1;
    ptr->next=temp2;
    ptr=ptr->next;
    ListNode* temp3 = new ListNode(0);
    temp3->val=2;
    ptr->next=temp3;
    ptr=ptr->next;

    show(top);
    top=deleteDuplicates(top);
    show(top);

    return 0;
}