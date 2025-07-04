// Last updated: 7/4/2025, 1:30:27 PM
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>pascle;
        for(int i=0;i<=rowIndex;i++){
            vector<int>v(i+1);
            pascle.push_back(v);
                for(int j=0;j<=i;j++){
                    if(j==0||j==i) pascle[i][j]=1;
                    else pascle[i][j]=pascle[i-1][j]+pascle[i-1][j-1];
                }
            }
            return pascle[rowIndex];
        }
};