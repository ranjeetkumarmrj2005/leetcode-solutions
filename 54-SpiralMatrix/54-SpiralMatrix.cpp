// Last updated: 7/4/2025, 1:30:40 PM
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int maxr=matrix.size()-1;
    int maxc=matrix[0].size()-1;
    int minr=0,minc=0;
    int t=(maxr+1)*(maxc+1);
    int x=0;
    vector<int>spiral(t);
    
    while(minr<=maxr&&minc<=maxc){
    for(int j=minc;j<=maxc;j++){
        if(x<t){
      spiral[x]=matrix[minr][j];
      x++;
        }
    }
    minr++;
    if(minr>maxr||minc>maxc) break;
    for(int i=minr;i<=maxr;i++){
            if(x<t){
      spiral[x]=matrix[i][maxc];
      x++;
        }
    }
    maxc--;
    if(minr>maxr||minc>maxc) break;
    for(int j=maxc;j>=minc;j--){
            if(x<t){
      spiral[x]=matrix[maxr][j];
      x++;
        }
    }
    maxr--;
    if(minr>maxr||minc>maxc) break;
    for(int i=maxr;i>=minr;i--){
            if(x<t){
      spiral[x]=matrix[i][minc];
      x++;
        }
    }
    minc++;
    if(minr>maxr||minc>maxc) break;
    }
     return spiral;
    }
};