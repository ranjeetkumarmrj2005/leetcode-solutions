// Last updated: 7/4/2025, 1:29:51 PM
class Solution {
public:
    int c=0;
    void merge(vector<int>u,vector<int>v,vector<int>&res){
    int i=0;
    int j=0;
    int k=0;
    while(i<u.size()&&j<v.size()){
       if(u[i]<v[j]){
        res[k]=u[i];
        i++;
        k++;
        }
       else{
        res[k]=v[j];
        j++;
        k++;
        }
    }
    if(i==u.size()){
        while(j<v.size()){
        res[k]=v[j];
            k++;
            j++;
        }
    }
    if(j==v.size()){
        while(i<u.size()){
            res[k]=u[i];
            k++;
            i++;
        }
    }
   }
    int inversion( vector<int>&a,vector<int>&b){
        int i=0;
        int j=0;
        int count=0;
        while(i<a.size()&&j<b.size()){
            if((long long)a[i]>(long long)2*b[j]) {
                count =count+(a.size()-i);
                j++;
            }
            else i++;
        }
        return count;
    }
    void mergeSort(vector<int>& nums){
        int n=nums.size();
        if(n==1) return ;
        int n1=n/2;
        int n2=n-n/2;
        vector<int>a(n1);
        vector<int>b(n2);
        for(int i=0;i<n1;i++) a[i]=nums[i];
        for(int i=0;i<n2;i++) b[i]=nums[n1+i];
        mergeSort(a);
        mergeSort(b);
        c=c+inversion(a,b);
        merge(a,b,nums);
    }
    int reversePairs(vector<int>& nums) {
        mergeSort(nums);
        return c;
    } 
};