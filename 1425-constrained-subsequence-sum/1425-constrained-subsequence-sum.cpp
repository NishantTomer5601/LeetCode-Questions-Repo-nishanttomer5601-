  // MLE bcoz k is of same order of n:

// class Solution {
// public:
//     int solve(vector<int>& nums,int i, int k,int n,int prev,vector<vector<int>> &dp){
//         //base case:
//         if(i>=n) return 0;
        
//         if(dp[i][prev+1]!=-1) return dp[i][prev+1];
        
//         int exc=solve(nums,i+1,k,n,prev,dp);
//         int inc=-1e7;
//         if(prev==-1 || abs(prev-i)<=k)
//             inc=nums[i]+solve(nums,i+1,k,n,i,dp);
        
//         return dp[i][prev+1]= max(inc,exc);
        
//     }
    
//     int constrainedSubsetSum(vector<int>& nums, int k) {
//         int n=nums.size();
        
//         int maxx=INT_MIN,count=0;
//         for(int i=0;i<n;i++){
//             if(nums[i]<0) count++;
//             maxx=max(maxx,nums[i]);
//         }
//         if(count==n) return maxx;
//         vector<vector<int>> dp(n+1,vector<int> (n+1,-1));
//         int x= solve(nums,0,k,n,-1,dp);
     
//         return x;
        
//     }
// };

class Solution {
public:

    int constrainedSubsetSum(vector<int>& nums, int k) {

        int n = nums.size();
        
        // OPTIMIZED SOLUTION 
        int ans = INT_MIN;
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<n;i++){
            int prevMaxTaken = 0;
            if(!pq.empty()) prevMaxTaken = pq.top().first;
            int temp = max(nums[i] , nums[i] + prevMaxTaken);
            pq.push({temp , i});
            ans = max(ans , temp);
            while(pq.top().second<=i-k){
                pq.pop();
            }
        }
        return ans;

    }
};