// Last updated: 7/8/2026, 6:50:18 PM
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
    vector<int>a;
    vector<int>b;
    void helperP(TreeNode* root){
        if(root==NULL) {
            a.push_back(INT_MIN);
            return;
        }
        a.push_back(root->val);
        helperP(root->left);
        helperP(root->right);
    }
    void helperQ(TreeNode* root){
        if(root==NULL) {
            b.push_back(INT_MIN);
            return;
        }
        b.push_back(root->val);
        helperQ(root->left);
        helperQ(root->right);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        helperP(p);
        helperQ(q);
        int P =a.size();
        int Q =b.size();
        if(P!=Q) return false;
        else{
            for(int i=0;i<P;i++){
                if(a[i]!=b[i]) return false;
            }
        }
        return true;
    }
};