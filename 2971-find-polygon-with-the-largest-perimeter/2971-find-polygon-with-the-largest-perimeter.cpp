#define ll long long
class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        ll ans=-1;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        ll sum=0;
        for(auto it: nums){
            sum+=it;
        }
        
       for(int i=n-1;i>=2;i--){
           if(sum-nums[i]>nums[i]) return sum;
           sum-=nums[i];
       }



        return -1;
     
    }
};