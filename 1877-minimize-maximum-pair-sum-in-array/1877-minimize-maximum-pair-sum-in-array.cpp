class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n=nums.size();
        int st=0,en=n-1;
        sort(nums.begin(),nums.end());
        
        int ans=-1;
        
        while(st<en){
            ans=max(ans,nums[st]+nums[en]);
            st++;en--;
        }
        
        return ans;
        

        
    }
};