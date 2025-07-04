// Last updated: 7/4/2025, 1:30:51 PM
class Solution {
public:
void HELPER(string s,vector<string>&Ans,int open,int close,int n){
    if(close==n){
        Ans.push_back(s);
        return;
    }
    if(open<n)  HELPER(s+'(',Ans,open+1,close,n);
    if(close<open)  HELPER(s+')',Ans,open,close+1,n);
}
    vector<string> generateParenthesis(int n) {
        vector<string>Ans;
        HELPER("",Ans,0,0,n);
        return Ans;
    }
};