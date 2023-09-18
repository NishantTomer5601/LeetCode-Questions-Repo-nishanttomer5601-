#include<bits/stdc++.h>
class Solution {
public:
void reverse(vector<int> &mat){

    int n=mat.size();
    int i=0,j=n-1;
    while(i<j){
        swap(mat[i],mat[j]);
        i++;
        j--;
    }

}
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();

        for(int i=0;i<n;i++){
            for(int j=i;j<m;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++){
           reverse(matrix[i]);
        }

        
    }
};