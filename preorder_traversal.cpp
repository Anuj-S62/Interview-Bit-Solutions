#include<bits/stdc++.h>
using namespace std;


// Definition for binary tree
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


vector<int> preorderTraversal(TreeNode* root) {
    vector<int> res;
    stack<TreeNode*> nodeStack;
    
    while (nodeStack.size() != 0 || root != NULL) {
        if(root == NULL) {
            root = nodeStack.top();
            nodeStack.pop();
        } 
        else {
            res.push_back(root->val);
            if(root->right != NULL)
                nodeStack.push(root->right);
            root = root->left;
        }
    }
    return res;
}

int main(){
    

    return 0;
}