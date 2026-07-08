// Last updated: 7/8/2026, 6:50:09 PM

class Solution {
public:
    int level(TreeNode* root){
        if(root==NULL) return 0;
        else return 1+max(level(root->left),level(root->right));
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        int leftsub=level(root->left);
        int rightsub=level(root->right);
        if(abs(leftsub-rightsub)>1) return false;
        else return isBalanced(root->left) && isBalanced(root->right);
    }
};