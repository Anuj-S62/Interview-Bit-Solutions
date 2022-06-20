#include<bits/stdc++.h>
using namespace std;

 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

ListNode* removeNthFromEnd(ListNode* A, int B) {
    ListNode* ptr=A;
    int count=0;
    while(ptr){
        count++;
        ptr=ptr->next;
    }
    if(count==1){
        return NULL;
    }
    int x=count - B;
    if(x<=0){
        A=A->next;
        return A;
    }
    ptr=A;
    for(int i=0;i<x-1;i++){
        ptr=ptr->next;
    }
    ptr->next=ptr->next->next;
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
    
    ListNode *l1 = new ListNode(0);
    l1->val = 3;
    ListNode *ptr = l1;
    int a = 5;
    for (int i = 0; i < 3; i++)
    {
        ListNode *temp = new ListNode(0);
        temp->val = a;
        ptr->next = temp;
        ptr = ptr->next;
        a++;
    }

    show(l1);
    l1=removeNthFromEnd(l1,2);
    show(l1);
    

    return 0;
}