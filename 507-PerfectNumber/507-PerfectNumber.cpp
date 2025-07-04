// Last updated: 7/4/2025, 1:29:49 PM
class Solution {
public:
    bool factor_sum_(int num){
        if(num==1) return false;
        int sum=0;
        for(int i=1;i<sqrt(num);i++) if(num%i==0) sum=sum+i;
        for(int i=sqrt(num);i>1;i--) if(num%i==0) sum=sum+num/i;  
        return sum==num;
        }
    bool checkPerfectNumber(int num) {
        return factor_sum_(num);
    }
};