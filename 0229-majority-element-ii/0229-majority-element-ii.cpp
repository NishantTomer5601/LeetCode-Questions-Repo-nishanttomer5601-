class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
         int count=n/3;
        vector<int> ans;
        
        unordered_map<int,int> map;
        
        for(int i=0;i<n;i++){
            map[nums[i]]++;
        }
        
        for(auto it: map){
            if(it.second>count) ans.push_back(it.first);
        }
        
        return ans;
        
    }
};