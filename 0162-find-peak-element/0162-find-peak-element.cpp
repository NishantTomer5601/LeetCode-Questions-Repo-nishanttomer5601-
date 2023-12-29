class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()== 1) return 0; 
        
        int n = nums.size();
        
		
        if(nums[0] > nums[1]) return 0;
        if(nums[n-1] > nums[n-2]) return n-1;
		
		// search in the remaining array
        int st = 1;
        int end = n-2;
        
        while(st <= end) {
            int mid = st + (end - st)/2;
            if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]) return mid;
            else if(nums[mid] < nums[mid-1]) end = mid - 1;
            else if(nums[mid] < nums[mid+1]) st = mid + 1;
        }
        return -1;
    }
};