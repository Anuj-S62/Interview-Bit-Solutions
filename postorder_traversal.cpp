#include<bits/stdc++.h>
using namespace std;

void disp(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


vector<int> postorderTraversal(TreeNode *root) {
            // stack<TreeNode*> nodeStack;
            // vector<int> result;
            // //base case
            // if(root==NULL)
            //     return result;
            // nodeStack.push(root);
            // while(!nodeStack.empty()) {
            //     TreeNode* node= nodeStack.top();  
            //     result.push_back(node->val);
            //     nodeStack.pop();
            //     if(node->left)
            //         nodeStack.push(node->left);
            //     if(node->right)
            //         nodeStack.push(node->right);
            // }
            // reverse(result.begin(),result.end());
            // return result;
        vector<int> res;
        stack<TreeNode* > st;
        TreeNode* ptr = root;
        if(!ptr) return res;
        while(st.size() || !ptr){
            if(!ptr){
                ptr = st.top();
                st.pop();
            }
            else{
                res.push_back(ptr->val);
                if(ptr->left) st.push(ptr->left);
                ptr=ptr->right;
            }
        }
        reverse(res.begin(),res.end());
        disp(res);
        return res;
}

TreeNode* create(int val){
   TreeNode * root = new TreeNode;
   root->val = val;
   root->left = nullptr;
   root->right = nullptr;
   return  root;
}

int main(){
    TreeNode * root = new TreeNode;
    root->val = 12;

    TreeNode * l1 = create(56);
    TreeNode * r1 = create(76);
    root->left = l1;
    root->right = r1;

    TreeNode* l2 = create(89);
    TreeNode* r2 = create(78);
    l1->left = l2;
    l1->right = r2;
    // preorder(root);
    // cout<<endl;
    // postorder(root);
    // cout<<endl;
    // inorder(root);



    return 0;
}