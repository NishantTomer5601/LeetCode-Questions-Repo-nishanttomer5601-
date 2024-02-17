class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> map;
        int maxx=INT_MIN;
        for(auto it:nums){
            map[it]++;
            maxx=max(maxx,map[it]);
        }
      int count =0;
        for(auto it:map) if(it.second==maxx) count++;
        
        
        
        return count*maxx;
        
    }
};