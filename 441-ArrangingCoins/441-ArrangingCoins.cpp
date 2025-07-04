// Last updated: 7/4/2025, 1:29:56 PM
class Solution {
public:
    int arrangeCoins(int n) {
        int row=0;
        int i=1;
        while(n>0){
          n=n-i;
           i++;
           if(n<0) break;
           row++;
        }
        return row;
    }
};