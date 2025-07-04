// Last updated: 7/4/2025, 5:37:44 PM
class Solution {
public:
    int count=0;
    bool isPrime(int n){
        if(n<=1) return false;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0) return false;
        }
        return true;
    }
    int minSteps(int n) {
        if(isPrime(n)) return count+n;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0) {
                count=count+i;
                return minSteps(n/i);
            }
       } 
       return count;
    }
};