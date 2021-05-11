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
    set<int> res;
    void dfs(TreeNode *root)
    {
        if(!root)
        {
            return;
        }
        res.insert(root->val);
        dfs(root->left);
        dfs(root->right);
    }
    bool isUnivalTree(TreeNode* root)
    {
        dfs(root);
        if(res.size()==1)
        {
            return true;
        }
        return false;
    }
};