class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 0;
        int ans=0,sum=0;
        unordered_map<int,int> map;
        
        
       
        for(int i=0;i<n;i++){
            if(nums[i]==1) sum++;
            else sum--;
            
            if(sum==0){
                ans=max(ans,i+1);
            }
            else if(map.find(sum)!=map.end()){
                ans=max(ans,i-map[sum]);
            }
            
            else{
                map[sum]=i;
            }
        }
        
        return ans;
        
    }
};