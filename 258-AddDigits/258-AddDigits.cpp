// Last updated: 7/4/2025, 1:30:07 PM
class Solution {
public:
    int addDigits(int num) {
       int i=0;
       int sum=0;
       while(num>0){
        int k=num%10;
        sum=sum+k;
        num=num/10;
       }
       if(sum<10) return sum;
       else return addDigits(sum);
    }
};