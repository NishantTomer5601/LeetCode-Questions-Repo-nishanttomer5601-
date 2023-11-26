class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n=nums.size();
        vector<int> prefix(n,0);
        prefix[0]=nums[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+nums[i];
        }
        
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(i==0){
                int a=(n-1)*nums[i];
                int b=prefix[n-1]-nums[i];
                int c=abs(a-b);
                ans.push_back(c);
                
            }
            if(i==n-1){
                int a=(n-1)*nums[i];
                int b=prefix[i-1];
                int c=abs(a-b);
                ans.push_back(c);
                
                
            }
            if(i>0 && i<n-1){
                int a=i*nums[i];
                int b=prefix[i-1];
                int c=abs(a-b);
                
                int d=(n-(i+1))*nums[i];
                int e=prefix[n-1]-prefix[i];
                int f=abs(d-e);
                int x=c+f;
                
                ans.push_back(x);
                
                
            }
        }
        return ans;
    }
};