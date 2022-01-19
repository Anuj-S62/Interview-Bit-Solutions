#include<bits/stdc++.h>
using namespace std;


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
 
int lPalin(ListNode* A) {
    vector<int> arr;
    ListNode* ptr=A;
    while(ptr){
        arr.push_back(ptr->val);
        ptr=ptr->next;
    }
    cout<<endl;
    for(int i=0;i<arr.size()/2;i++){
        if(arr[i]!=arr[arr.size()-1-i]){
            return 0;
        }
    }
    return 1;
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
    l1->val = 1;
    ListNode *ptr = l1;
    {
        ListNode *temp = new ListNode(0);
        temp->val = 2;
        ptr->next = temp;
        ptr = ptr->next;
    }
    {
        ListNode *temp = new ListNode(0);
        temp->val = 1;
        ptr->next = temp;
        ptr = ptr->next;
    }

    show(l1);
    cout<<lPalin(l1)<<endl;

    return 0;
}