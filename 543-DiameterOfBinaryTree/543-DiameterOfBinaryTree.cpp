// Last updated: 7/8/2026, 6:49:11 PM

class Solution {
public:
    int maxDia=0;
    int level(TreeNode* root){
        if(root==NULL) return 0;
        return 1+max(level(root->left),level(root->right));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) return NULL;
        int leftlevel= level(root->left);
        int rightlevel=level(root->right);
        int dia=leftlevel+rightlevel;
        maxDia=max(maxDia, dia);
        diameterOfBinaryTree(root->left);
        diameterOfBinaryTree(root->right);
        return maxDia;
    }
};