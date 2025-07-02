/*
class Solution {
public:
    int countPath(int i,int j,int row,int col){
        if(i==row||j==col){
            return 1;
        }
        return countPath(i+1,j,row,col)+countPath(i,j+1,row,col);
    }
    int uniquePaths(int m, int n) {
        return countPath(0,0,m-1,n-1);
    }
};
*/