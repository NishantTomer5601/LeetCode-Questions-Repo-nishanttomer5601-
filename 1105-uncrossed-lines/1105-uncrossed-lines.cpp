class Solution {
private:
    int solve(vector<int>& nums1, vector<int>& nums2,int m, int n,  unordered_map<int,list<int>> &map,int i,int prev,vector<vector<int>> &dp){
        //base case:
        if(i==m) return 0;

        if(dp[i][prev+1]!=-1) return dp[i][prev+1];
        //inc case:
        int inc=0;
        int p=0;

        if( map.find(nums1[i])==map.end()) 
        return dp[i][prev+1]=solve(nums1,nums2,m,n,map,i+1,prev,dp);
        
        if( map.find(nums1[i])!=map.end()){
            for(auto &it:map[nums1[i]]){
            if(it>prev){
            p=it;
            break;
            }
         
}
if(p <= prev)
    return dp[i][prev+1]=solve(nums1,nums2,m,n,map,i+1,prev,dp);
return dp[i][prev+1]=max(1+solve(nums1,nums2,m,n,map,i+1,p,dp),solve(nums1,nums2,m,n,map,i+1,prev,dp));
        }


return 0;


    }    
public:


    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        int m=nums1.size();
vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        unordered_map<int,list<int>> map;
        for(int i=0;i<n;i++){
            map[nums2[i]].push_back(i);
            
        }

        return solve(nums1,nums2,m,n,map,0,-1,dp);
        
    }
};