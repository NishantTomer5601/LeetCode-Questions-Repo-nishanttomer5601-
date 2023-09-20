class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        int ans=1e8;
        
        vector<int> psum(n,0);
        psum[0]=nums[0];
        
        for(int i=1;i<n;i++){
            psum[i]=nums[i]+psum[i-1];
            
        }
         vector<int> ssum(n,0);
        ssum[n-1]=nums[n-1];
        
        for(int i=n-2;i>=0;i--){
            ssum[i]=nums[i]+ssum[i+1];
            
        }
        
        for(int i=0;i<n;i++){
            if(psum[i]==x) {
                ans=min(ans,i+1);
            }
        }
        
        for(int i=0;i<n;i++){
            if(ssum[i]==x) {
                ans=min(ans,n-i);
            }
        }
        
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[psum[i]]=i+1;
        }
        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[ssum[i]]=n-i;
        }
        
        for(int i=0;i<n;i++){
            if(mpp.find(x-psum[i])!=mpp.end() && mp[psum[i]]+mpp[x-psum[i]]<=n){
                ans=min(ans,mp[psum[i]]+mpp[x-psum[i]]);
                
            }
            if(mp.find(x-ssum[i])!=mp.end() && mp[x-ssum[i]]+mpp[ssum[i]]<=n){
                ans=min(ans,mp[x-ssum[i]]+mpp[ssum[i]]);
                
            }
        }
        
        
        
        
        
        return ans==1e8?-1:ans;
    }
};