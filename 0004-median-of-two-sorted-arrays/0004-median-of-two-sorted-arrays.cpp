


class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        vector<int> v(m+n);
        int b=m+n;
        for(int i=0;i<(m+n);i++){
            if(i<m) v[i]=nums1[i];
            else v[i]=nums2[i-m];
        }
        sort(v.begin(),v.end());
        if((m+n)&1) return (v[(m+n)/2]/1.0);
        else{
            return (v[b/2]+v[b/2-1])/2.0;

        }
        return 0;
        
    }
};