// Last updated: 7/4/2025, 1:30:57 PM
class Solution {
public:
    int reverse(int x) {
        int m=0;
        while(x!=0){
         if(m>INT_MAX/10||(m==INT_MAX/10&&x%10>7)||m<INT_MIN/10||(m==INT_MIN/10&&x%10<-8)) return 0;
        m=m*10;
        m=m+x%10;
        x=x/10;
        }
        return m;
        }
};