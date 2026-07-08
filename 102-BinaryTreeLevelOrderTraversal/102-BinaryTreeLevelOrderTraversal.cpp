// Last updated: 7/8/2026, 6:50:15 PM

class Solution {
public:
    void Nth_level(TreeNode* root,int current_level,int target_level,vector<int>&v){
        if(root==NULL) return ;
        if(current_level==target_level){
            v.push_back(root->val);
            return;
        }
        Nth_level(root->left,current_level+1,target_level,v);
        Nth_level(root->right,current_level+1,target_level,v);
    }
    int level(TreeNode* root){
        if(root==NULL) return 0;
        return 1+max(level(root->left),level(root->right));
    }
    void helper(TreeNode* root,vector<vector<int>>&ans){
        int maxlevel=level(root);
        for(int i=1;i<=maxlevel;i++){
            vector<int>v;
            Nth_level(root,1,i,v);
            ans.push_back(v);
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        helper(root,ans);
        return ans;
    }
};