// Last updated: 7/4/2025, 1:29:01 PM
class Solution {
public:
    int bestClosingTime(string customers) {
        int n=customers.size();
        vector<int>pre(n+1); // N
        vector<int>suf(n+1); // Y
        vector<int>v(n+1);   //  add
        int count=0;
        int minele=INT_MAX;
        int minidx=-1;
        for(int i=0;i<n+1;i++){
            if(customers[i]=='Y') count++;
            if(i==0) pre[i]=0;
            else if(customers[i-1]=='N') pre[i]=pre[i-1]+1;
            else pre[i]=pre[i-1];
        }
          for(int i=0;i<n+1;i++){
            if(customers[i]=='Y') suf[i]=count--;
            else suf[i]=count;
        }
          for(int i=0;i<n+1;i++){
           v[i]=pre[i]+suf[i];
        }
          for(int i=0;i<n+1;i++){
          if(minele>v[i]){
            minele=v[i];
            minidx=i;
          }
        }
        return minidx;
    }
};