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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> postorder;
        stack<TreeNode*> nodes;
        TreeNode* cur = root;
        while(cur||!nodes.empty()){
            if(cur){
                postorder.push_back(cur->val);
                nodes.push(cur);
                cur = cur->right;
            }
            else{
                cur = nodes.top();
                nodes.pop();
                cur = cur->left;
            }
        }
        reverse(postorder.begin(),postorder.end());
        return postorder;
    }
};