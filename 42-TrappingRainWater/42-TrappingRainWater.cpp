// Last updated: 7/4/2025, 1:30:43 PM
class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>leftmax(n);
        leftmax[0]=-1;
        int max=height[0];
        for(int i=0;i<n;i++){
            leftmax[i]=max;
            if(max<height[i]) max=height[i];
        }
        vector<int>rightmax(n);
        rightmax[n-1]=-1;
         max=height[n-1];
        for(int i=n-2;i>=0;i--){
            rightmax[i]=max;
            if(max<height[i]) max=height[i];
        }
        vector<int> mini(n);
        for(int i=0;i<n;i++){
            mini[i]=min( rightmax[i],leftmax[i]);
        }
        int water=0;
        for(int i=1;i<n-1;i++){
            if(height[i]<mini[i]){
                water=water+(mini[i]-height[i]);
            }
        }
        return water;
        }
};