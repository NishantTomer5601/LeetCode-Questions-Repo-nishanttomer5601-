// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         int n=nums.size();
//         int countZero=0;
//         int index=-1;
//         int prd=1;
//         for(int j=0;j<n;j++){
//             int i=nums[j];
//             if(i==0){ countZero++;index=j;}
//             if(i!=0) prd*=i;
//         }
//         if(countZero>=2){
//             vector<int> v(n,0);
//             return v;
//         }
//         if(countZero==1){
//             vector<int> v(n,0);
//             v[index]=prd;
//             return v;
//         }
//         vector<int> v(n,0);
//         for(int i=0;i<n;i++){
//             v[i]=prd/nums[i];
//         }
        
        
//         return v;
        
        
//     }
// };






class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        vector<int> lftVec(n);
        vector<int> rgtVec(n);
        
        lftVec[0] = 1;
        for(int i = 1; i < nums.size(); i++){
            lftVec[i] = lftVec[i - 1] * nums[i - 1];
        }
        
        rgtVec[n - 1] = 1;
        for (int j = n - 2; j >= 0; j--) {
            rgtVec[j] = rgtVec[j + 1] * nums[j + 1];
        }
        
        for (int k = 0; k < n; k++) {
            ans[k]= lftVec[k] * rgtVec[k];
        }
        
        return ans;
    }
};