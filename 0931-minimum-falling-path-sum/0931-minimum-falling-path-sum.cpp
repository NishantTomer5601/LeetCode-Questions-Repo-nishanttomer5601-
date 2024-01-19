/*class Solution {
private:

int solve(vector<vector<int>> &matrix,int i, int j, vector<vector<int>> &dp){

    //base case:
    if(i<0 || j<0 || j>=matrix[0].size()) return 1e8;
    if(i==0) return matrix[i][j];
    
    if(dp[i][j]!=-1) return dp[i][j];
 

    int up=matrix[i][j]+ solve(matrix,i-1,j,dp);
    int dleft=matrix[i][j]+ solve(matrix,i-1,j-1,dp);
    int dright=matrix[i][j]+ solve(matrix,i-1,j+1,dp);

    return dp[i][j]=min(up, min(dleft, dright));
}    
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
    int n=matrix.size();
    int m=matrix[0].size();
    vector<vector<int>> dp(n,vector<int> (m,-1));

  int mini=1e8;

    for(int i=0;i<m;i++){
        
        mini=min(mini,solve(matrix,n-1,i,dp));
    }
    return mini;
        
    }
};*/

// Tabulation method:

class Solution {
private:

// int solve(vector<vector<int>> &matrix,int i, int j, vector<vector<int>> &dp){

//     //base case:
//     if(i<0 || j<0 || j>=matrix[0].size()) return 1e8;
//     if(i==0) return matrix[i][j];
    
//     if(dp[i][j]!=-1) return dp[i][j];
 

//     int up=matrix[i][j]+ solve(matrix,i-1,j,dp);
//     int dleft=matrix[i][j]+ solve(matrix,i-1,j-1,dp);
//     int dright=matrix[i][j]+ solve(matrix,i-1,j+1,dp);

//     return dp[i][j]=min(up, min(dleft, dright));
// }    
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
    int n=matrix.size();
    int m=matrix[0].size();
    vector<vector<int>> dp(n,vector<int> (m,0));

  int mini=1e8;

    //handle base cases:
    for(int j=0;j<m;j++){
        dp[0][j]=matrix[0][j];
    }

    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){


           int up=matrix[i][j]+ dp[i-1][j];
           int dleft=1e8;
           if(i>=1 && j>=1)
           dleft=matrix[i][j]+ dp[i-1][j-1];

           int dright=1e8;
           if(i>=1 && j+1<m)
           dright=matrix[i][j]+ dp[i-1][j+1];

           dp[i][j]=min(up, min(dleft, dright));
        }
    }


    for(int i=0;i<m;i++){
        mini=min(mini,dp[n-1][i]);
    }
      return mini; 
    }
};