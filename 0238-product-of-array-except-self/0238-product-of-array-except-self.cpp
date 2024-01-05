class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int countZero=0;
        int index=-1;
        int prd=1;
        for(int j=0;j<n;j++){
            int i=nums[j];
            if(i==0){ countZero++;index=j;}
            if(i!=0) prd*=i;
        }
        if(countZero>=2){
            vector<int> v(n,0);
            return v;
        }
        if(countZero==1){
            vector<int> v(n,0);
            v[index]=prd;
            return v;
        }
        vector<int> v(n,0);
        for(int i=0;i<n;i++){
            v[i]=prd/nums[i];
        }
        
        
        return v;
        
        
    }
};