class Solution {
public:
    void PreCalc(vector<int>& nums,vector<int>& v, int n){
        v[0]=nums[0];
        for(int i=1;i<n;i++){
            v[i]=v[i-1]+nums[i];
        }
        
    }
    
    
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n=nums.size();
        int ans=0;
        vector<int> v(n,0);
        PreCalc(nums,v,n);
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                int lb=lower_bound(v.begin(),v.end(),goal+v[i]-1)-v.begin();
                lb=max(lb,i);
                int ub=upper_bound(v.begin(),v.end(),goal+v[i]-1)-v.begin();
                ans+=(ub-lb);
                
            }
            else{
                int lb=lower_bound(v.begin(),v.end(),goal+v[i])-v.begin();
                lb=max(lb,i);
                int ub=upper_bound(v.begin(),v.end(),goal+v[i])-v.begin();
                ans+=(ub-lb);
                
            }
            
        }
        
        return ans;
        
    }
};