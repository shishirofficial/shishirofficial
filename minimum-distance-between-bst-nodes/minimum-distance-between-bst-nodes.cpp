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
    int diff=INT_MAX;;
    TreeNode *prev = NULL;
    void dfs(TreeNode *root)
    {
        if(root->left!=NULL)
        {
            dfs(root->left);
        }
        if(prev)
        {
            diff=min(abs(prev->val - root->val),diff);
        }
        prev=root;
        if(root->right!=NULL)
        {
            dfs(root->right);
        }
    }
    int minDiffInBST(TreeNode* root)
    {
      dfs(root);
      return diff;
    }
};