// Last updated: 7/4/2025, 1:30:41 PM
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
       int m=matrix.size();
       int n=matrix[0].size();
       for(int i=0;i<m;i++){
          for(int j=i;j<n;j++){
           swap(matrix[j][i],matrix[i][j]);
          }
       } 
       for(int k=0;k<m;k++){
       int i=0,j=n-1;
       while(i<j){
        swap(matrix[k][i],matrix[k][j]);
       i++;
       j--;
       }
       }
    }
};