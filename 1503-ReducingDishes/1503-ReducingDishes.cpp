// Last updated: 7/4/2025, 1:29:14 PM
class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());
        int n=satisfaction.size();
        vector<int>suf(n);
        int idx=-1;
        int sum=0;
        int x=1;
        for(int i=n-1;i>=0;i--){
            if(i==n-1) suf[i]=satisfaction[i];
            else suf[i]=suf[i+1]+satisfaction[i];
            if(suf[i]>=0) idx=i;
        }
        if(idx==-1) return sum;
        else{
            for(int i=idx;i<n;i++){
                sum=sum + satisfaction[i]*(x++);
            }
        }
        return sum;
    }
};