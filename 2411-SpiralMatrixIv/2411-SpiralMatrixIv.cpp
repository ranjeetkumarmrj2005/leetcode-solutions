// Last updated: 7/17/2025, 1:39:31 PM

class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        int minrow=0,maxrow=m-1;
        int mincol=0,maxcol=n-1;
        ListNode* temp=head;
        vector<vector<int>>v(m,vector<int>(n));
        while(minrow<=maxrow && mincol<=maxcol){
        for(int i=mincol;i<=maxcol;i++){
            if(temp!=NULL) {
                v[minrow][i]=temp->val;
                temp=temp->next;
            }
            else v[minrow][i]=-1;
        }
        minrow++;
        if (minrow > maxrow) break;
        for(int i=minrow;i<=maxrow;i++){
            if(temp!=NULL){
                v[i][maxcol]=temp->val;
                temp=temp->next;
            }
            else v[i][maxcol]=-1; 
        }
        maxcol--;
        if (mincol > maxcol) break;
        for(int i=maxcol;i>=mincol;i--){
            if(temp!=NULL){
                v[maxrow][i]=temp->val;
                temp=temp->next;
            }
            else v[maxrow][i]=-1;  
        }
        maxrow--;
        if (minrow > maxrow) break;
        for(int i=maxrow;i>=minrow;i--){
            if(temp!=NULL){
                v[i][mincol]=temp->val;
                temp=temp->next;
            }
            else v[i][mincol]=-1; 
        }
        mincol++;
        if (mincol > maxcol) break;
        }
        return v;
    }
};