// Last updated: 7/8/2026, 6:49:30 PM

class Solution {
public:
    void helper(TreeNode* root,vector<string>&v,string s){
        if(root==NULL) return;
        string str=to_string(root->val);
        if(root->left==NULL && root->right==NULL){
            s=s+str;
            v.push_back(s);
            return;
        }
        helper(root->left,v,s + str + "->");
        helper(root->right,v,s + str + "->");

    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>v;
        string s="";
        helper(root,v,s);
        return v;
    }
};