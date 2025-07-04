// Last updated: 7/4/2025, 1:29:06 PM
class Solution {
public:
    int minimumSum(int num) {
        int minimum;
        vector<int>v;
        while(num>0){
        int k=num%10;
        v.push_back(k);
        num=num/10;
        }
        sort(v.begin(),v.end());
        return v[0]*10+v[2]+v[1]*10+v[3];
    }
};