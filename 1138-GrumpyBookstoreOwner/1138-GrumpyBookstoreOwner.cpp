// Last updated: 7/4/2025, 1:29:24 PM
class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n=customers.size();
        // [1,0,1,2,1,1,7,5]
        // [0,1,0,1,0,1,0,1]  minutes 3
        int maxsum=INT_MIN;
        int maxidx=0;
        int sum=0;
        for(int l=0;l<minutes;l++) if(grumpy[l]==1) sum=sum+customers[l]*grumpy[l];
        maxsum=sum;
        int i=1;
        int j=minutes;
        while(j<n){
            sum=sum-customers[i-1]*grumpy[i-1]+customers[j]*grumpy[j];
            if(sum>maxsum){
                maxsum=sum;
                maxidx=i; 
            }
            i++;
            j++;
        }
        sum=0;
        for(int i=0;i<n;i++){
            if( i>=maxidx && i<=(maxidx+minutes-1)) sum=sum+customers[i];
            else if (grumpy[i]==0) sum=sum+customers[i];
        }
        return sum;
    }
};