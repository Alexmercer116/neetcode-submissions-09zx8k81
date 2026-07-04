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
        stack<pair<TreeNode*,int>> nodes;
        nodes.push({root,1});
        while(!nodes.empty()){
            pair<TreeNode*,int> cur = nodes.top();
            nodes.pop();
            TreeNode* node = cur.first;
            int depth = cur.second;
            if(node){
                level = max(level,depth);
                nodes.push({node->left,depth+1});
                nodes.push({node->right,depth+1});
            }
        }
        return level;
    }
};
