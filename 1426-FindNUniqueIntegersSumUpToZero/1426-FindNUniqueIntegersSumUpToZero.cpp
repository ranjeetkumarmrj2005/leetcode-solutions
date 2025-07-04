// Last updated: 7/4/2025, 1:29:18 PM
class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>v;
        int x=n/2;
        if(n%2==0) {
         for(int i=-x;i<=x;i++){
            if(i!=0) v.push_back(i);
        }    
        }
        if(n%2!=0){
            for(int i=-x;i<=x;i++){
            v.push_back(i);
        }
        }
        return v;
    }
};