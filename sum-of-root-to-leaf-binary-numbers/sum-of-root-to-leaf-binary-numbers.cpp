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
    int rootToLeaf=0;
    
    void preorder(TreeNode *root,int currNumber)
    {
        if(root != NULL)
        {
        
        currNumber = (currNumber << 1) | root->val;
        if(root->left ==NULL && root->right == NULL)
        {
            rootToLeaf+=currNumber;
        }
        preorder(root->left,currNumber);
        preorder(root->right,currNumber);
        }
    }
    int sumRootToLeaf(TreeNode* root) 
    {
        preorder(root,0);
        return rootToLeaf;
    }
};