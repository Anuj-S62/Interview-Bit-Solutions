#include<bits/stdc++.h>
using namespace std;


void disp(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" "<<endl;
    }
    cout<<endl;
}

// Definition for binary tree
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    // TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void inorder(TreeNode* root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->val<<" ";
        inorder(root->right);
    }
}

// vector<int> inorderTraversal(TreeNode* A) {
//     stack<TreeNode* > s;
//     TreeNode* ptr = A;
//     vector<int> res;
//     while(ptr || s.size()){
//         if(ptr==nullptr && s.size()){
//             ptr = s.top();
//             s.pop();
//             res.push_back(ptr->val);
//             ptr=ptr->right;
//             continue;
//         }
//         if(ptr->left){
//             s.push(ptr);
//         }
//         else{
//            res.push_back(ptr->val);
//            disp(res);
//            cout<<"helo3"<<endl;
//         }
//         ptr = ptr->left;
//     }
//     return res;
// }

TreeNode* create(int val){
   TreeNode * root = new TreeNode;
   root->val = val;
   root->left = nullptr;
   root->right = nullptr;
   return  root;
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
    TreeNode* root = new TreeNode;
    root->val = 1;

    TreeNode* a1 = create(2);
    root->left = a1;

    TreeNode* a2 = create(3);
    a1->left = a2;

    TreeNode* a3 = create(5);
    a1->right = a3;

    TreeNode* a4 = create(4);
    a3->left = a4;
  
    TreeNode* a5 = create(6);
    a3->right = a5;

    TreeNode* a6 = create(7);
    root->right = a6;

    TreeNode* a7 = create(8);
    a6->left = a7;

    TreeNode* a8 = create(9);
    a6->right = a8;

    TreeNode* a9 = create(10);
    a8->left = a8;

    TreeNode* a10 = create(11);
    a8->right = a10;

    TreeNode* a11 = create(12);
    a10->right = a11;

    TreeNode* a12 = create(13);
    a11->left = a12;

    // inorder(root);
    inorderTraversal(root);
    // TreeNode* ptr = root;
    // ptr=ptr->right->right->right->right->left->right;
    // if(!ptr) cout<<"helo";
    // else cout<<ptr->val<<endl;

    return 0;
}