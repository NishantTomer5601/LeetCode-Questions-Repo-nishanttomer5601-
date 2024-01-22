class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int> v;
        for(int i=0;i<n;i++){
            if(i>0 &&nums[i]==nums[i-1])v.push_back(nums[i]);
                        
        }
        for(int i=0;i<n;i++){
            if(find(nums.begin(),nums.end(),i+1)==nums.end())v.push_back(i+1);
                        
        }
        return v;
        
    }
};