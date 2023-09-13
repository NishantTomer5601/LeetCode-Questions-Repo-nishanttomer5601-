class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int sum=0;
       int i=0,j=0;
       while(i<n &&j<m){
           sum+=mat[i++][j++];
       }
       i=0,j=m-1;
       while(i<n && j>=0){
           if(i!=j) sum+=mat[i][j];
           i++;
           j--;
       }

     return sum;   
    }
};