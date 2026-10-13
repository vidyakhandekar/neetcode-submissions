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
    bool isSame(TreeNode* p, TreeNode* q){
        if(p==NULL and q==NULL) return true;
        if(p==NULL or q==NULL) return false;
        if(p->val !=q->val) return false;
        bool l= isSame(p->left,q->left);
        bool r= isSame(p->right,q->right);
        return l && r;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == NULL ) return false;
        bool s=false;
        if(root-> val == subRoot->val){
            s= isSame(root,subRoot );
        }   
        bool left = isSubtree(root->left,subRoot);
        bool right =isSubtree(root -> right,subRoot);

        return left || right || s ; 
    }
};
