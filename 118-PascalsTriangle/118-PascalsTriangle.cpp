// Last updated: 7/4/2025, 1:30:28 PM
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>pascle;
        for(int i=1;i<=numRows;i++){
            vector<int>v(i);
            pascle.push_back(v);
        }
      for(int i=0;i<numRows;i++){
        for(int j=0;j<=i;j++){
            if(j==0||j==i) pascle[i][j]=1;
            else pascle[i][j]=pascle[i-1][j]+pascle[i-1][j-1];
        }
      }
      return pascle;
    }
};