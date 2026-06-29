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
        if(!root) return postorder;
        stack<TreeNode*> unvisited;
        stack<TreeNode*> visited;
        unvisited.push(root);
        while(!unvisited.empty()){
           root =  unvisited.top();
           unvisited.pop();
           visited.push(root);
           if(root->left) unvisited.push(root->left);
           if(root->right) unvisited.push(root->right);
        }
        while(!visited.empty()){
            postorder.push_back(visited.top()->val);
            visited.pop();
        }
        return postorder;
    }
};