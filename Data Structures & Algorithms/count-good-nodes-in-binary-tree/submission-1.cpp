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
    int  countNode(TreeNode* root, int max ){
         if(root==NULL) return 0;
            int currentGoodNodes=0;
            
        
            if( root->val >= max)
            {
                currentGoodNodes++;
                max = root->val ;
            }
            int l= countNode(root->left,max);
            int r= countNode(root->right,max);
            
       
         return currentGoodNodes+l+r;
    }
    int goodNodes(TreeNode* root) {
       return countNode(root,root->val);
    }
};
