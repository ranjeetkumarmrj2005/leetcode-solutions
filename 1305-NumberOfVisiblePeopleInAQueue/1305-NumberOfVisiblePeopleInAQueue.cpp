// Last updated: 7/8/2026, 6:48:42 PM
class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        int n=heights.size();
        vector<int>ans(n,0);
        stack<int>st;
        st.push(heights[n-1]);
        for(int i=n-2;i>=0;i--){
            int see=0;
            while(st.size()>0 && heights[i]>=st.top()){
                st.pop();  
                see++;  
            }
            if(st.size()==0) ans[i]=see;
            else ans[i]=see+1;
            
            st.push(heights[i]);

        }
        return ans;
    }
};