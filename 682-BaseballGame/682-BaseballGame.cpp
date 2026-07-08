// Last updated: 7/8/2026, 6:49:05 PM
class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n=operations.size();
        int ans=0;
        stack<int>val;
        for(int i=0;i<n;i++){
            if(operations[i]=="C"){ 
                ans=ans-val.top();
                val.pop();
            }
            else if(operations[i]=="D"){
                ans=ans+2*val.top();
                val.push(2*val.top());
            }
            else if(operations[i]=="+"){
                int val1=val.top();
                val.pop();
                int val2=val.top();
                val.pop();
                val.push(val2);
                val.push(val1);
                int x=val1+val2;
                ans=ans+x;
                val.push(x);
            }
            else{
                val.push(stoi(operations[i]));
                ans=ans+stoi(operations[i]);
            }
        }
        return ans;
    }
};