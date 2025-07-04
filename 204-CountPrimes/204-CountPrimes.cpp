// Last updated: 7/4/2025, 1:30:19 PM
class Solution {
public:
    void fillsieve(vector<bool>&sieve){
        int n=sieve.size();
        for(int i=2;i<=sqrt(n);i++){
            for(int j=i*2;j<n;j=j+i){
                sieve[j]=0;
            }
        }
    }
    int countPrimes(int n){
        if(n<=2) return 0;
        // 1-> prime ,0-> not prime // O(NLogLogN) 
        int count=0;     
        vector<bool>sieve(n,1);
        fillsieve(sieve);
        sieve[0]=0;
        sieve[1]=0;
        for(int i=2;i<n;i++){
            if(sieve[i]==1) count++;
        }
    return count;
    }
};