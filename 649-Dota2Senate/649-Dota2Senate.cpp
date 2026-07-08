// Last updated: 7/8/2026, 6:49:10 PM
class Solution {
public:
    string predictPartyVictory(string senate) {
        int n=senate.size();
        queue<int>q;
        queue<int>r;
        queue<int>d;
        for(int i=0;i<n;i++){
            if(senate[i]=='R') r.push(i);
            else d.push(i);
            q.push(i);
        }
        while(q.size()>1){
            if(senate[q.front()]=='R') {
                if(d.size()==0) return "Radiant";
                else{
                    senate[d.front()]='X';
                    q.push(q.front());
                    q.pop();
                    r.push(r.front());
                    r.pop();
                    d.pop();
                }
            }
            else if(senate[q.front()]=='D'){
                if(r.size()==0) return "Dire";
                else{
                    senate[r.front()]='X';
                    q.push(q.front());
                    q.pop();
                    d.push(d.front());
                    d.pop();
                    r.pop();
                }
            }
            else{
                q.pop();
            }
        }
        if(senate[q.front()]=='R') return "Radiant";
        else return "Dire";
    }
};