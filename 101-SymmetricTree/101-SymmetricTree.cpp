// Last updated: 7/8/2026, 6:50:16 PM

class Solution {
public:
    bool helper(TreeNode* p, TreeNode* q){
        if(p == NULL && q ==NULL) return true;
        else if(p ==NULL || q ==NULL) return false;
        else if(p->val != q->val) return false;
        else return helper(p->left,q->right) && helper(p->right,q->left);
    }
    bool isSymmetric(TreeNode* root) {

        return helper(root->left,root->right);
    }
};