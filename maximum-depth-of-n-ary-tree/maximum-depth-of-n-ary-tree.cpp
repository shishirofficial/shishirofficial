/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxDepth(Node* root)
    {
        if(!root)
        {
            return 0;
        }
        int level = 1,len;
        Node *curr;
        queue<Node*> q;
        for(auto n:root->children)q.push(n);
        len=q.size();
        while(len)
        {
          for(int i=0;i<len;i++)
          {
              curr=q.front();
              q.pop();
              for(auto it:curr->children)q.push(it);
              
          }
          len=q.size();
          level++;
            
        }
       return level; 
    }
};