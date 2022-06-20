#include<bits/stdc++.h>
using namespace std;



// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* mergeKLists(vector<ListNode*> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    priority_queue<int> pq;
    ListNode* head = A[0];
    for(int i = 0;i<A.size();i++){
        ListNode* ptr = A[i];
        while(ptr){
            pq.push(-1*(ptr->val));
            ptr = ptr->next;
        }
    }
    for(int i = 0;i<A.size()-1;i++){
        ListNode* ptr = A[i];
        while(ptr->next) ptr = ptr->next;
        ptr->next = A[i+1];
    }

    ListNode* ptr = head;
    while(pq.size()){
        ptr->val = -1*(pq.top());
        ptr = ptr->next;
        pq.pop();
    }
    return head;
}


int main(){
    

    return 0;
}