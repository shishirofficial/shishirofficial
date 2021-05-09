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
    unordered_map<int,int> mp;
    void dfs(TreeNode *root)
    {
        if(root==NULL) return;
        mp[root->val]++;
        dfs(root->left);
        dfs(root->right);
    }
    vector<int> findMode(TreeNode* root)
    {
        vector<int> res;
        int t_max=-1;
        dfs(root);
        for(auto it:mp)
        {
            if(it.second == t_max)
            {
                res.push_back(it.first);
            }
            else if(it.second > t_max)
            {
                t_max=it.second;
                res = {it.first};
            }        
        }
        return res;
    }
};