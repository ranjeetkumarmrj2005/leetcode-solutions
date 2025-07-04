// Last updated: 7/4/2025, 1:30:09 PM
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
         sort(t.begin(),t.end());
         if(s==t) return true;
         else return false;
    }
};