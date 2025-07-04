// Last updated: 7/4/2025, 1:28:59 PM
    class Solution {
    public:
        bool isPrime(int j){
            if(j==1) return false;
            for(int i=2;i<=sqrt(j);i++){
                if(j%i==0) return false;
            }
            return true;
        }
        int sum_of_prime_factor_(int n){
            int sum=0;
                for(int i=1;i<sqrt(n);i++){
                    if(n%i==0 && isPrime(i) ){
                        int m=n;
                        while(m%i==0){
                            sum=sum+i;
                            m=m/i;
                        }
                    } 
                }
                for(int i=sqrt(n);i>=1;i--){
                    if(n%i==0 && isPrime(n/i) ){
                        int m=n;
                        while(m%(n/i)==0){
                            sum=sum+n/i;
                            m=m/(n/i);
                        }
                    }
                }
            if(isPrime(sum)||sum==n)return sum;
            else return sum_of_prime_factor_(sum);
        }
        int smallestValue(int n) {
            if(n==4 || isPrime(n)) return n;
            else return sum_of_prime_factor_(n);
        }
    };