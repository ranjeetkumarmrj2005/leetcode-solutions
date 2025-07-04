// Last updated: 7/4/2025, 5:49:55 PM
class Solution {
public:
    // int count=0;
    // bool isPrime(int n){
    //     if(n<=1) return false;
    //     for(int i=2;i<=sqrt(n);i++){
    //         if(n%i==0) return false;
    //     }
    //     return true;
    // }
    int minSteps(int n) {
       if(n==1) return 0;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0) return i+ minSteps(n/i);
       } 
       return n;
    }
};