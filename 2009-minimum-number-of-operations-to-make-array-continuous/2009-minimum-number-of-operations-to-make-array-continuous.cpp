class Solution {
public:
    int minOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=1;
        int ans=1;
        int i=0;
        int j=1;
        int n=nums.size();
        int range=nums[i]+n-1;

        while(j<n){
            if(nums[j]<=range){
              
                if(nums[j]!=nums[j-1])count++;
                ans=max(ans,count);
                j++;
            }

            else{
                while(nums[i]==nums[i+1])i++;
                i++;
                count--;
                range= nums[i]+n-1;
                
            }
        }
       return n-ans;
    }
};