// Last updated: 7/4/2025, 1:29:09 PM
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int>v(2001,0);
        int count=0;
        int idx=-1;
        for(int i=0;i<n;i++){
            v[arr[i]]=1;
        }
        for(int i=1;i<v.size();i++){
            if(v[i]==0){
                count++;
                if(count==k){
                idx=i;
                break;
                }
            }
        }
        return idx;
    }
};