// Last updated: 7/4/2025, 1:29:22 PM
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int n1=str1.size();
        int n2=str2.size();
        string str="";
        int gcd=1;
        if(str1+str2!=str2+str1) return str;
        for(int i=1;i<=min(n1,n2);i++){
        if(n1%i==0&&n2%i==0) gcd =i;
        }
        for(int i=0;i<gcd;i++){
            str.push_back(str1[i]);
        }
        return str;
    }
};