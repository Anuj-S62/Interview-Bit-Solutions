#include<bits/stdc++.h>
using namespace std;


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

// ListNode* sortList(ListNode* A) {
//     vector<int> ans;
//     ListNode* ptr = A;
//     while(ptr){
//         ans.push_back(ptr->val);
//         ptr=ptr->next;
//     }
//     sort(ans.begin(),ans.end());
//     ptr = A;
//     int i=0;
//     while(ptr){
//         ptr->val = ans[i];
//         i++;
//         ptr=ptr->next;
//     }
//     return A;
// }

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

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

ListNode* create(int val){
    ListNode* node = new ListNode(val);
    return node;
}

void swap(int &a,int &b){
    int x = b;
    b = a;
    a = x;
}

void merge(ListNode* A,int low,int mid,int high){
    ListNode* i = A;
    ListNode* j = A;
    ListNode* k = A;
    ListNode* l = A;
    ListNode* ptr1 = A;
    // ListNode* ptr2 = A;
    int x = low-1;
    while(x){
        i=i->next;
        x--;
    }
    ptr1 = i;
    x = mid-1;
    while(x){
        j = j->next;
        x--;
    }
    x = mid;
    while(x){
        k = k->next;
        x--;
    }
    x = high-1;
    while(x){
        l = l->next;
        x--;
    }
    // ptr2 = l;
    vector<int> temp;
    while(i!=j->next && k!=l->next){
        if(i->val > k->val){
            temp.push_back(k->val);
            k = k->next;
        }
        else if(i->val < k->val){
            temp.push_back(i->val);
            i = i->next;
        }
        else{
            temp.push_back(i->val);
            temp.push_back(k->val);
            i=i->next;
            k=k->next;
        }
    }
    while(i!=j->next){
        temp.push_back(i->val);
        i=i->next;
    }
    while(k!=l->next){
        temp.push_back(k->val);
        k=k->next;
    }
    for(int i=0;i<temp.size();i++){
        ptr1->val = temp[i];
        ptr1 = ptr1->next;
    }
}

void mergeSort(ListNode* A,int low,int high){
    if(low<high){
        int mid = (low+high)/2;
        mergeSort(A,low,mid);
        mergeSort(A,mid+1,high);
        merge(A,low,mid,high);
    }
}

ListNode* sortList(ListNode* A) {
    ListNode* ptr1 = A;
    int low = 0;
    int high = 0;
    while(ptr1){
        high++;
        ptr1=ptr1->next;
    }
    if(high==1) return A;
    ptr1 = A;
    mergeSort(ptr1,1,high);
    return A;
}



int main(){
    ListNode* head = new ListNode(3);
    ListNode* node1 = create(4);
    head->next = node1;
    ListNode* node2 = create(8);
    node1->next = node2;
    ListNode* node3 = create(9);
    node2->next = node3;
    ListNode* node4 = create(2);
    node3->next = node4;
    ListNode* node5 = create(1);
    node4->next = node5;
    ListNode* node6 = create(0);
    node5->next = node6;
    ListNode* node7 = create(5);
    node6->next = node7; 
    // merge(head,1,1,2);
    // merge(head,3,3,4);
    // merge(head,1,2,4);
    // merge(head,5,5,6);
    // merge(head,7,7,8);
    // merge(head,5,6,8);
    // merge(head,1,4,8);
    // mergeSort(head,1,8);
    sortList(head);

    show(head);


    return 0;
}