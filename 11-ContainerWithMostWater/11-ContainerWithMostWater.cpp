// Last updated: 7/4/2025, 1:30:54 PM
class Solution {
public:
    int maxArea(vector<int>& oneDvector) {
        int n=oneDvector.size();
        int i=0;
        int j=n-1;
        int maxarea=0;
        while(i<j){
            int width=j-i;
            int height=min(oneDvector[i],oneDvector[j]);
            int area=width*height;
            maxarea=max(maxarea,area);
            if(oneDvector[i]<oneDvector[j]) i++;
            else j--;
        }
        return maxarea;
    }
};