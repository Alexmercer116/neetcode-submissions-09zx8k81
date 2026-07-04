/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(!root) return nullptr;
        TreeNode* cur = root;
        stack<TreeNode*> nodes;
        nodes.push(root);
        while(!nodes.empty()){
            cur = nodes.top();
            nodes.pop();
            swap(cur->left,cur->right);
            if(cur->left) nodes.push(cur->left);
            if(cur->right) nodes.push(cur->right);
        }
        return root;
    }
};
