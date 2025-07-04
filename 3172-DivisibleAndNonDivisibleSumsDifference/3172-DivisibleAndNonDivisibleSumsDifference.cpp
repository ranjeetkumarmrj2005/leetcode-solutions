// Last updated: 7/4/2025, 1:28:54 PM
class Solution {
public:
    int differenceOfSums(int n, int m) {
         int sumofdivisible=0;
        int sumofnotdivisible=0;    
        for(int i=1;i<=n;i++){
            if(i%m!=0) sumofdivisible=i+sumofdivisible;
            else  sumofnotdivisible=i+sumofnotdivisible;
        }
    return sumofdivisible-sumofnotdivisible;
    }
};