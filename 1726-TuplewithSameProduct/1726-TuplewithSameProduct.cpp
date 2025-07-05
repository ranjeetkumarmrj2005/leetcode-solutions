// Last updated: 7/5/2025, 10:16:46 PM
class Solution {
public:
    int findLucky(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        if(n==1){
            if(arr[0]==1) return 1;
            else return -1;
        }
        int count=1;
        int ans=-1;
        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]) count++;
            else if(count==arr[i]){
                ans=arr[i];
                count =1;
            }
            else count=1;
        }
        if(count==arr[n-2]) ans = arr[n-2];
        return ans;
    }
};