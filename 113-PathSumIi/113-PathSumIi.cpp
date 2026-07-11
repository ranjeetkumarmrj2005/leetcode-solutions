// Last updated: 7/11/2026, 11:47:11 AM

class Solution {
public:
    void helper(TreeNode* root,int targetSum,vector<int>v,vector<vector<int>>&ans){
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL){
            if(targetSum==root->val){
                v.push_back(root->val);
                ans.push_back(v);
            }
            return;
        }
        v.push_back(root->val);
        helper(root->left,targetSum-root->val,v,ans);
        helper(root->right,targetSum-root->val,v,ans);

    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int>v;
        helper(root,targetSum,v,ans);
        return ans;
    }
};