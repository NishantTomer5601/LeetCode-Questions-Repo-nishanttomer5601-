class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(nums[0]==nums[n-1]) return 0;
        
        int count=0;
        int a=nums[0];
        for(int i=0;i<n;i++){
            count+=(abs(a-nums[i]));
        }
        return count;
        
    }
};