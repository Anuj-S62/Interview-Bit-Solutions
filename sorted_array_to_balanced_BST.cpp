#include<bits/stdc++.h>
using namespace std;


// Definition for binary tree
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


TreeNode* create(int val){
    TreeNode * ptr = new TreeNode(val);
    return ptr;
}

TreeNode* BST(vector<int> &A,int low,int high){
    int mid = (low+high)/2;
    if(low<=high){
        TreeNode* root =create(A[mid]);
        root->left = BST(A,low,mid-1);
        root->right = BST(A,mid+1,high);
        return root;
    }
    return NULL;
}

TreeNode* sortedArrayToBST(const vector<int> &A) {
    vector<int> temp = A;
    TreeNode* root = BST(temp,0,temp.size()-1);
    return root;
}

TreeNode* rec_search(TreeNode* n,int val){
    if(n==nullptr){
        cout<<"Not found"<<endl;
        return n;
    }
    if(n->val == val){
        cout<<"found"<<endl;
        return n;
    }
    else if(n->val > val){
        return rec_search(n->left,val);
    }
    return rec_search(n->right,val);
}

void disp(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" "<<endl;
    }
    cout<<endl;
}

vector<int> inorderTraversal(TreeNode* A) {
    stack<TreeNode *> s;
    TreeNode *curr = A;
    vector<int> res;

    while (curr != NULL || s.empty() == false)
    {
        while (curr !=  NULL)
        {
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        res.push_back(curr->val);
        curr = curr->right;
 
    }
    return res;
}

int main(){
    vector<int> A = {1,2,3,4,5,6,7,8,9,10};
    TreeNode* root = sortedArrayToBST(A);
    TreeNode* ptr = root;
    // ptr = rec_search(ptr,2);
    vector<int> res = inorderTraversal(ptr);
    disp(res);
    // if(ptr){
    //     cout<<"found"<<endl;
    //     cout<<ptr->val<<endl;
    // }
    // else cout<<"NULL"<<endl;
    return 0;
}