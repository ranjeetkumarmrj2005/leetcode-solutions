// Last updated: 7/8/2026, 6:49:37 PM

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL) return NULL;
        if(root==p || root==q) return root;
        TreeNode* leftresult=lowestCommonAncestor(root->left,p,q);
        TreeNode* rightresult=lowestCommonAncestor(root->right,p,q);

        if(leftresult!=NULL && rightresult!=NULL) return root;
        return (leftresult!=NULL) ? leftresult:rightresult;


        

    }
};