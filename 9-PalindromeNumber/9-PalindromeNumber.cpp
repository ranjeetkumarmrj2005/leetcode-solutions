// Last updated: 7/4/2025, 1:30:56 PM
class Solution {
public:
   int reverse(int x){
    long long l=0;
    while(x>0){
    int k=x%10;
    l=l*10+(long long)k;
    x=x/10;
    }
    return l;
   }
    bool isPalindrome(int x) {
        int original=x;
        int t= reverse(x);
        if( t==original) return true;
        else return false;
    }
};