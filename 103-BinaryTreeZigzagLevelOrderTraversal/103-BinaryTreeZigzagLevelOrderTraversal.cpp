// Last updated: 7/8/2026, 6:50:12 PM


class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL) return ans;
        queue<TreeNode*>q;
        q.push(root);
        int a=1;
        while(q.size()>0){
            int size=q.size();
            vector<int>v(size);
            for(int i=0;i<size;i++){
                TreeNode* temp=q.front();
                q.pop();
                if(a%2!=0) v[i]=temp->val;
                else v[size-1-i]=temp->val;
                if(temp->left!=NULL) q.push(temp->left);
                if(temp->right!=NULL) q.push(temp->right);
            }
            ans.push_back(v);
            a++;
        }
        return ans;
    }
};