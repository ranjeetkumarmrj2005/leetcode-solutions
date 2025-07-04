// Last updated: 7/4/2025, 7:22:48 PM
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
        }
    }
    for(int i=sqrt(n);i>1;i--){
        if(n%(n/i)==0 && isPrime(n/i)){
            if(30%(n/i)!=0) return false;
        }
    }
    return true;
}
    bool isUgly(int n) {
        if(n<=0) return false;
        if(isPrime(n)&& n>5) return false;
        else if(isPrime(n)&& 30%n==0) return true;
        else return factor(n);
         
    }
};