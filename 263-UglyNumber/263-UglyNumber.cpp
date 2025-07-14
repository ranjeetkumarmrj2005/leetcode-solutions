// Last updated: 7/14/2025, 1:48:25 PM
class Solution {
public:
    bool isUgly(int n) {
        if(n<=0) return false;
        while(n%2==0) n=n/2;
        while(n%3==0) n=n/3;
        while(n%5==0) n=n/5;
        return (n==1);
    }
};