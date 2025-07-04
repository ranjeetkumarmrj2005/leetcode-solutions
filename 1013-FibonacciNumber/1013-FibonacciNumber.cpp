// Last updated: 7/4/2025, 1:29:28 PM
class Solution {
public:
    int fib(int n) {
        int sum=0,a=1,b=0;
        for(int i=0;i<n;i++){
            sum=a+b;
            a=b;
            b=sum;
        }  
        return b;
    }
};