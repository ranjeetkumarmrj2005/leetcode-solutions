// Last updated: 7/4/2025, 1:29:39 PM
class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n==1) return 0;
        if(k%2==0){
            int previous=kthGrammar(n-1,k/2);
            if(previous==1) return 0;
            else return 1;
        }
        else{
            int previous=kthGrammar(n-1,k/2+1);
            return previous;
        }
    }
};