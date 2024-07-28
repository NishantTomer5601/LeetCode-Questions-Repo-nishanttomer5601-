class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int n=nums.size();
        int countS=0,countD=0;
        for(int i=0;i<n;i++){
            if(to_string(nums[i]).size()==1)countS+=nums[i];
            else countD+=nums[i];
        }
        if(countS==countD) return false;
        return true;
        
    }
};