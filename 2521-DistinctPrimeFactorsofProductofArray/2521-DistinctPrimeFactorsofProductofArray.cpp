// Last updated: 7/4/2025, 7:16:40 PM
class Solution {
public:
bool isPrime(int n){
    if(n==1) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
bool factor(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0 && isPrime(i)){
            if(30%i!=0) return false;
            // else false;
        }
    }
    for(int i=sqrt(n);i>1;i--){
        if(n%(n/i)==0 && isPrime(n/i)){
            if(30%(n/i)!=0) return false;
            // else false;
        }
    }
    return true;
}
    bool isUgly(int n) {
        if(n<=0) return false;
        if(n==1||n==2||n==3||n==5) return true;
        if(isPrime(n)) return false;
        return factor(n);
    }
};