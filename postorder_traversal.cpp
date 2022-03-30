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
            stack<TreeNode*> nodeStack;
            vector<int> result;
            //base case
            if(root==NULL)
                return result;
            nodeStack.push(root);
            while(!nodeStack.empty()) {
                TreeNode* node= nodeStack.top();  
                result.push_back(node->val);
                nodeStack.pop();
                if(node->left)
                    nodeStack.push(node->left);
                if(node->right)
                    nodeStack.push(node->right);
            }
            reverse(result.begin(),result.end());
            return result;
}

int main(){
   
    return 0;
}