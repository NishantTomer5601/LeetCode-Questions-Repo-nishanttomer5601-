class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> map;
        for(auto i:nums){
            map[i]++;
        }
        int ans=0;
        for(auto it:map){
            cout<<it.first<<" "<< it.second<<endl;
            int a=it.second;
            if(a==1) return -1;
            else {
                if(a%3==0) {
                    ans+=(a/3);
                }
                else if(a%3==2){
                    int b=a%3;
                    ans+=(a/3);
                    
                    ans+=(b/2);
                    
                }
                else {
                    ans+=((a/3)-1+2);
                } 
            }
        }
     return ans;   
    }
};