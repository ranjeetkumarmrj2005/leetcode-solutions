// Last updated: 7/4/2025, 1:29:58 PM
class Solution {
public:
    //  36  
    bool isPerfectSquare(int num) {
        if(num==0||num==1) return true;
        int low=0;
        int high=num;
        while(low<=high){
            int mid= low+(high-low)/2;
            if(mid==num/mid) {
                if(mid*mid==num) return true;
                else return false;
            }
            else if(mid<num/mid) low=mid+1;
            else high=mid-1;
        }
        return false;
    }
};