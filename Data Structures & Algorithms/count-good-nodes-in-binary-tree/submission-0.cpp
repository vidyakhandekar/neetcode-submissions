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
            int l=0;
         if(root->left ){
            if( root->left->val >= max)
            {
                currentGoodNodes++;
                l=countNode(root->left, root->left->val);
            }
            else{
                l=countNode(root->left, max);
            }
         }
         
            int r=0;
         if(root->right ){
           if( root->right->val >= max)
            {
                currentGoodNodes++;
                r=countNode(root->right, root->right->val);
            }
            else{
                r=countNode(root->right, max);
            }
         }
       
         return currentGoodNodes+l+r;
    }
    int goodNodes(TreeNode* root) {
       return 1+ countNode(root,root->val);
    }
};
