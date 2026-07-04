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
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        int level = 0;
        queue<TreeNode*> nodes;
        nodes.push(root);
        while(!nodes.empty()){
            int size = nodes.size();
            for(int i=0;i<size;i++){
                TreeNode* cur = nodes.front();
                nodes.pop();
                if(cur->left) nodes.push(cur->left);
                if(cur->right) nodes.push(cur->right);
            }
            level++;
        }
        return level;
    }
};
