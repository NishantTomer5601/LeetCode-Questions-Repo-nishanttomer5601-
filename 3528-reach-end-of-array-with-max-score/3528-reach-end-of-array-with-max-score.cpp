#include<bits/stdc++.h>
#define ll long long
class Solution {
public:
    long long findMaximumScore(vector<int>& nums) {
        int n=nums.size();
       ll ans=0; ll prev=nums[0]; ll p=0;
       for(int i=1;i<n;i++){
        if(nums[i]>prev){
            ans+=((i-p)*prev);
            prev=nums[i];
            p=i;
        }
        //we will sort pieces accordingly and take the greedy approach..

       }
       if(p!=n-1) ans+=(n-1-p)*prev;
       return ans!=0?ans:prev*(n-1);
    }
};