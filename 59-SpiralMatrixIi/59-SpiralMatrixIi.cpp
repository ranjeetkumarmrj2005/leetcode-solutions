// Last updated: 7/17/2025, 1:43:14 PM
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>v(n,vector<int>(n));
        int minrow=0,maxrow=n-1;
        int mincol=0,maxcol=n-1;
        int count=1;
        while(minrow<=maxcol&&mincol<=maxrow){
        for(int j=mincol;j<=maxcol;j++){
            v[minrow][j]=count++;
        }
        minrow++;
        for(int i=minrow;i<=maxrow;i++){
            v[i][maxcol]=count++;
        }
        maxcol--;
        for(int j=maxcol;j>=mincol;j--){
            v[maxrow][j]=count++;
        }
        maxrow--;
        for(int i=maxrow;i>=minrow;i--){
            v[i][mincol]=count++;
        }
        mincol++;
        }
        return v;
    }
};