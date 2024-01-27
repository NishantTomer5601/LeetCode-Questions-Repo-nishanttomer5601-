#include<bits/stdc++.h>
class Solution {
public:
    int maximumSetSize(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int ans=0;
        set<int> s,ss,sss;
        
        for(auto it:nums1) s.insert(it);
        for(auto it:nums2){ 
            ss.insert(it);
            if(s.find(it)!=s.end()){
                sss.insert(it);
            }
        }
         
        
        
        
        int x=s.size();
        int c=sss.size();
        int y=ss.size();
        ans= min(x-c,n/2) + min(y-c,n/2)+c;
        return min(ans,n);
    }
};