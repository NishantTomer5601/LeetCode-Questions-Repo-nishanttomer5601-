#define ll long long
class Solution {
private:
   void preCompute(vector<int>& nums,vector<int>& v, int n,int k,int maxx){
      if(nums[0]==maxx) {v[0]=1;}
      
       for(int i=1;i<n;i++){
           if(nums[i]==maxx)
           v[i]=v[i-1]+1;
           else{
               v[i]=v[i-1];
           }
       }

   }

public:
    long long countSubarrays(vector<int>& nums, int k) {
        ll n=nums.size();
        vector<int> v(n,0);
        int maxx=INT_MIN;
        for(int i=0;i<n;i++){
            maxx=max(maxx,nums[i]);
        }
        preCompute(nums,v,n,k,maxx);
        ll ans=0;
        for(int i=0;i<n;i++){
            ll lb=0;
            if(nums[i]!=maxx){
                lb=lower_bound(v.begin(),v.end(),v[i]+k)-v.begin();
                ans+=(n-lb);

            }
            else{
                lb=lower_bound(v.begin(),v.end(),v[i]-1+k)-v.begin();
                ans+=(n-lb);

            }
        }

        return ans;
    }
};