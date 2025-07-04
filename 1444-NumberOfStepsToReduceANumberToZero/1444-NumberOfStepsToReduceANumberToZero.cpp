// Last updated: 7/4/2025, 1:29:17 PM
class Solution {
public:
    int numberOfSteps(int num) {
        int count=0;
        while(num>0){
          if(num%2==0) {
            num=num/2;
            count++;
          }
          else {
            num--;
            count++;
          }
        }
        return count;
    }
};