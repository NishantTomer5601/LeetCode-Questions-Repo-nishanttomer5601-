class Solution {
public:
    vector<int> v;
    Solution(vector<int>& nums) {
        v=nums;
        
    }
    
    int pick(int target) {
        int ind=rand()%v.size();
        while(v[ind]!=target){
            ind=rand()%v.size();
            
        }
        return ind;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */