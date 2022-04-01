#include<bits/stdc++.h>
using namespace std;


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* detectCycle(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ListNode* ptr1=A;
    unordered_set<int* > st;
    while(ptr1){
        int * x = &(ptr1->val);
        if(st.find(x)!=st.end()) return ptr1;
        st.insert(x);
        ptr1 = ptr1->next;
    }
    return NULL;
}


int main(){
    

    return 0;
}