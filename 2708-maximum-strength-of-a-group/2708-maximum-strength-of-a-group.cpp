#define ll long long

class Solution {
public:
    long long maxStrength(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n==1) return nums[0];
        int count=0,cnt_pos=0,cntz=0;
        ll numm=nums[n-1];
        for(int i=0;i<n;i++){
            if(nums[i]<0) count++;
            else{
                if(i>0)
                numm=nums[i-1]*1ll;
                
                break;
            }
            
        }
        
        for(int i=0;i<n;i++){
            if(nums[i]>0) cnt_pos++;
            if(nums[i]==0) cntz++;
        }
        if(cntz==n) return 0;
        
        
        if(count==1 && cntz>0 && cnt_pos==0) return 0;
        
        ll ans=1;
        
        if(count&1){
            for(int i=0;i<n;i++){
                if(nums[i]!=0) ans=ans*nums[i]*1ll;
            }
            if(numm!=0)
            ans/=numm;
            
            return ans;
            
            
        }
        else{
            for(int i=0;i<n;i++){
                if(nums[i]!=0) ans=ans*nums[i]*1ll;
            }
            
            
            return ans;
            
        }
        return 0;
        
    }
};


// class Solution {
// public:
//     long long f(vector<int>& nums,int n, int i,long long ans){
//         if(i==n) return 1;
//         //exc:
//         ll exc=f(nums,n,i+1,ans);
//         //inc:
//         ll inc=nums[i]*f(nums,n,i+1,ans);
        
//         return max(inc,exc);
        
        
        
//     }
    
//     long long maxStrength(vector<int>& nums) {
//         int n=nums.size();
//         long long ans=1;
//         return f(nums,n,0,ans);
        
//     }
// };