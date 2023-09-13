/*class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int total=m*n;
        vector<int> ans;
        
        int firstrow=0;
        int lastcol=n-1;
        int lastrow=m-1;
        int firstcol=0;
        

        int count=0;

        while(count<total){

            // 1st row:
            for(int i=firstcol; count<total && i<=lastcol;i++){
                ans.push_back(matrix[firstrow][i]);
                count++;
            }
            firstrow++;

            for(int i=firstrow; count<total && i<=lastrow;i++){
                ans.push_back(matrix[i][lastcol]);
                count++;
            }
            lastcol--;

            for(int i=lastcol; count<total && i>=firstrow;i--){
                ans.push_back(matrix[lastrow][i]);
                count++;
            }
            lastrow--;
            for(int i=lastrow; count<total && i>=firstrow;i--){
                ans.push_back(matrix[i][firstcol]);
                count++;
            }
            firstcol++;
        }
        return ans;
    }
};
*/

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int> >& matrix) {
        
        
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();
        
        int count = 0;
        int total = row*col;
        
        //index initialisation
        int startingRow = 0;
        int startingCol = 0;
        int endingRow = row-1;
        int endingCol = col-1;
        
        
        while(count < total) {
            
            //print starting row
            for(int index = startingCol; count < total && index<=endingCol; index++) {
                ans.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;
            
            //print ending column
            for(int index = startingRow; count < total && index<=endingRow; index++) {
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;
            
            //print ending row
            for(int index = endingCol; count < total && index>=startingCol; index--) {
                ans.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;
            
            //print starting column
            for(int index = endingRow; count < total && index>=startingRow; index--) {
                ans.push_back(matrix[index][startingCol]);
                count++;
            }
            startingCol++;
        } 
        return ans;
    }
};

/*
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int k = 0, l = 0;
        int i;
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> result;

        while(k < m && l < n) {
            for(i = l; i < n; i++) {
                result.push_back(matrix[k][i]);
            }
            k++;

            for(i = k; i < m; i++) {
                result.push_back(matrix[i][n - 1]);
            }
            n--;

            if(k < m) {
                for(i = n - 1; i >= l; i--) {
                    result.push_back(matrix[m - 1][i]);
                }
                m--;
            }

            if(l < n) {
                for(i = m - 1; i >= k; i--) {
                    result.push_back(matrix[i][l]);
                }
                l++;
            }
        }

        return result;
    }
};
*/