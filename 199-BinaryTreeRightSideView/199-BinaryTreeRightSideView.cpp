// Last updated: 7/8/2026, 6:49:51 PM

class Solution {
public:
    int level(TreeNode* root){
        if(root==NULL) return 0;
        return 1+max(level(root->left),level(root->right));
    }
    void helper(TreeNode* root,int level,vector<int>&ans){
        if(root==NULL) return ;
        ans[level]=root->val;
        helper(root->left,level+1,ans);
        helper(root->right,level+1,ans);
    }
    vector<int> rightSideView(TreeNode* root) {
        int maxlevel=level(root);
        vector<int>ans(maxlevel,0);
        helper(root,0,ans);
        return ans;
    }
};