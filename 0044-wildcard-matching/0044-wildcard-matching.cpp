class Solution {

    bool solve(int i, int j, string &p, string &s,vector<vector<int>> &dp){

        //base cases:
        if(i<0 && j<0) return true;
        if(i<0) return false;
        if(j<0 && i>=0){
            for(int z=0;z<=i;z++){
                if(p[z]!='*') return false;
            }
            return true;
        }

        if(dp[i][j]!=-1) return dp[i][j];


        if(s[j]==p[i] || p[i]=='?'){
            return dp[i][j]=solve(i-1,j-1,p,s,dp);
        }
        else if(p[i]=='*'){

            return dp[i][j]=(solve(i-1,j,p,s,dp)|| solve(i,j-1,p,s,dp));

        }

        else{
            return dp[i][j]=false;
        }

    }

public:
    bool isMatch(string s, string p) {

        int n=p.length();
        int m=s.length();

        vector<vector<int>> dp(n,vector<int> (m,-1));
        return solve(n-1,m-1,p,s,dp);
        
    }
};