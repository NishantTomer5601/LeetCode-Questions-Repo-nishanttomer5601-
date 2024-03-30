class Solution {
public:
    int solve(int k,vector<int> &nums)
    {
        if(k==0) return 0;
        unordered_map<int,int> mp;
        int j=0;
        int count=0;
        int n=nums.size();
        int total=0;
        vector<int> freq(n+1,0);
        for(int i=0;i<n;i++)
        {
            if(freq[nums[i]]==0) count++;
            freq[nums[i]]++;
            if(count<=k) total+=(i-j+1); 
            else
            {
                while(count>k)
                {
                    freq[nums[j]]--;
                    if(freq[nums[j]]==0)
                    {
                        count--;
                    }
                    j++;
                }
                total+=(i-j+1);
            }
        }
        return total;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
       return solve(k,nums)-solve(k-1,nums);
    }
};