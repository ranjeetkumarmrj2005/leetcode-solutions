// Last updated: 7/8/2026, 6:49:57 PM

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>v;
        stack<TreeNode*>st;
        if(root!=NULL) st.push(root);
        while(st.size()>0){
            TreeNode* temp=st.top();
            st.pop();
            v.push_back(temp->val);
            if(temp->right!=NULL) st.push(temp->right);
            if(temp->left!=NULL) st.push(temp->left);
        }
        return v;        
    }
};


// class Solution {
// public:
//     void preorder(TreeNode* root,vector<int>&v){
//         if(root==NULL) return ;
//         v.push_back(root->val);
//         preorder(root->left,v);
//         preorder(root->right,v);
//     }
//     vector<int> preorderTraversal(TreeNode* root) {
//         vector<int>v;
//         preorder(root,v);
//         return v;
//     }
// };































