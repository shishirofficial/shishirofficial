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
    vector<double> averageOfLevels(TreeNode* root)
    {
        vector<double> res;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            double level_sum=0;
            int size=q.size();
            int no=size;
            while(size--)
            {
                TreeNode *t=q.front();
                q.pop();
                level_sum+=t->val;
                if(t->left!=NULL)
                {
                    q.push(t->left);
                }
                if(t->right!=NULL)
                {
                    q.push(t->right);
                }
            }
            res.push_back((double)level_sum/no);
        }
       return res; 
    }
};