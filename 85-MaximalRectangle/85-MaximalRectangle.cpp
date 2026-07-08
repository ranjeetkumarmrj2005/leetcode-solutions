// Last updated: 7/8/2026, 6:50:26 PM
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
    int n=heights.size();
    vector<int>nsi(n);
    stack<int>st;
    nsi[n-1]=n;
    st.push(n-1);
    for(int i=n-2;i>=0;i--){
        while(st.size()>0 && heights[st.top()]>=heights[i]) st.pop();
        if(st.size()==0) nsi[i]=n;
        else nsi[i]=st.top();
        st.push(i);
    }
    vector<int>psi(n);
    stack<int>gt;
    psi[0]=-1;
    gt.push(0);
    for(int i=1;i<n;i++){
        while(gt.size()>0 && heights[gt.top()]>=heights[i]) gt.pop();
        if(gt.size()==0) psi[i]=-1;
        else psi[i]=gt.top();
        gt.push(i); 
    }
    int max_area=0;
    for(int i=0;i<n;i++){
        max_area=max(max_area,heights[i]*(nsi[i]-psi[i]-1));
    }
    return max_area;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        int maxarea=0;
        int a=0;
        vector<int>heights(cols,0);
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                int element=matrix[i][j]-48;
                if(i==0){
                    heights[a]= heights[a]+element;
                    a++;
                }
                else if(matrix[i][j]!='0'){
                    heights[a]= heights[a]+element;
                    a++;
                }
                else{
                    heights[a]=0;
                    a++;
                }
            }
            maxarea=max(maxarea,largestRectangleArea(heights));
            a=0;
        }
        return maxarea;
        
    }
};