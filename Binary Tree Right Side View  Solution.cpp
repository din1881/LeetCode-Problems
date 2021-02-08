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
    vector<int> rightSideView(TreeNode* root) 
    {
        
        vector<int>res;
        if(root==nullptr)
            return res;
        
        queue<TreeNode*>tree;
        
        tree.push(root);
        tree.push(nullptr); 
        
        TreeNode* current;
        
        while(!tree.empty())
        {
            if(tree.front()!=nullptr)
            {   
                current=tree.front();
                if(current->left) tree.push(current->left);              
                if(current->right) tree.push(current->right);
                tree.pop();
            }
            else
            {   
                res.push_back(current->val);
                tree.pop();  
                if(!tree.empty()) tree.push(nullptr);
            }
        }
        
        return res;
    }
};
