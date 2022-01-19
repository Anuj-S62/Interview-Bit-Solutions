#include<bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

int solve(ListNode* A, int B) {
ListNode* ptr=A;
    int count=0;
    while(ptr){
        count++;
        ptr=ptr->next;
    }
    ptr=A;
    int mid=(count/2)+1;
    int idx=mid-B;
    if(idx<=0){
        return -1;
    }
    for(int i=0;i<idx-1;i++){
        ptr=ptr->next;
    }
    return ptr->val;
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
    int x=solve(l1,1);
    cout<<x<<endl;

    return 0;
}