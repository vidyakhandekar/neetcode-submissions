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
    int diameter(TreeNode* root,int & m) {
        if(root==NULL) return 0;

        int l= diameter(root->left,m);
        int r=diameter(root->right,m);
        int d= l+r;
        m=max(m,d);
     
        return 1+max(l,r);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int m=0;
       diameter(root,m);
        return m;
    }
};
