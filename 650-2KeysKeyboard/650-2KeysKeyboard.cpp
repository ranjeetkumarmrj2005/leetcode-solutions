// Last updated: 7/9/2025, 11:18:35 PM
class Solution {
public:
    int count=0;
    bool isPrime(int n){
        if(n<=1) return false;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0) return false;
        }
        return true;  // TC sqrt(n)*log(n)
    }
    int minSteps(int n) {
       if(isPrime(n)) return n;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0) return i+ minSteps(n/i);
       } 
       return 0;
    }
};