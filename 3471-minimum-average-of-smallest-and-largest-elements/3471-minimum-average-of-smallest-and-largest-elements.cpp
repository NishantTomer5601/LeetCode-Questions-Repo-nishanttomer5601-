class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        double ans=INT_MAX;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n/2;i++){
            double minElement=nums[i];
            double maxElement=nums[n-i-1];
            ans=min(ans,(minElement + maxElement) / 2);
        }
return ans;
        
    }
};