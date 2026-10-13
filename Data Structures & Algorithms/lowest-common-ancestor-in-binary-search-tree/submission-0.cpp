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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL) return NULL;
        if(root->val == p->val || root->val == q->val) return root;

        if((root->val > p->val && root->val < q->val) || (root->val < p->val && root->val > q->val)) {
            TreeNode* l= lowestCommonAncestor(root-> left, p, q);
            TreeNode* r= lowestCommonAncestor(root-> right, p, q);
              if(l==NULL and r==NULL) return NULL;
            if(l!=NULL and r==NULL) return l;
        if(l==NULL and r!=NULL) return r;
        }
        if(root->val > p->val && root->val > q->val) {
          return lowestCommonAncestor(root-> left, p, q);
             
        }
         if(root->val < p->val && root->val < q->val) {
          return lowestCommonAncestor(root-> right, p, q);
             
        }
        return root;
    }
};
