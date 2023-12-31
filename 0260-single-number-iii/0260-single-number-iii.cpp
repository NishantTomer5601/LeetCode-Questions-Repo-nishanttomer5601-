class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();
        if(n==2) return nums;
        vector<int> v;
       // int count=0;
        sort(nums.begin(),nums.end());
      //  bool check =true;
        int i=1;
        for(i=1;i<n;){
            if(nums[i]!=nums[i-1]){
                v.push_back(nums[i-1]) ; 
                break;
                
                
            }
            i+=2;
            
        }
        if(i>=n-1) {
            v.push_back(nums[n-1]);
            return v;
        }
        else{
            for(i;i<n-1;){
            if(nums[i]!=nums[i+1]){
                v.push_back(nums[i]) ; 
                return v;                
                
            }
            i+=2;
            
        }
            
            
        }
        v.push_back(nums[n-1]);
        return v;
    }
};