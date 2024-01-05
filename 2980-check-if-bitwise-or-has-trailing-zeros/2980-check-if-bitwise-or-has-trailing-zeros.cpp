class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int a=nums[i];
            for(int j=i+1;j<nums.size();j++){
                int b=nums[j];
                int c=a|b;
                if(!(c&1)) return true;
            }
        }
        return false;
    }
};