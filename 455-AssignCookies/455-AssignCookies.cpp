// Last updated: 7/4/2025, 1:29:52 PM
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n=s.size();
        int m=g.size();
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i=0;
        int j=0;
        int count=0;
        //    s i  5 6 7 8
        //    g j  7 8 9 10
        while(i<m&&j<n){
            if(s[j]>=g[i]){
            count++;
            i++;
            }
            j++;
        }
      return count;
    }
};