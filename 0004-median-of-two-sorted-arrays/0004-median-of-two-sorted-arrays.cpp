
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       // Initialization some neccessary variables
        vector<int>v;
        
        // store the array in the new array
        for(auto num:nums1)   // O(n1)
            v.push_back(num);
        
        for(auto num:nums2)  // O(n2)
            v.push_back(num);
        
        // Sort the array to find the median
        sort(v.begin(),v.end());  // O(nlogn)
        
        // Find the median and Return it
        int n=v.size();  // O(n)
        
        return n%2?v[n/2]:(v[n/2-1]+v[n/2])/2.0;
    }
};


// class Solution {
// public:
//     double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//         int m=nums1.size();
//         int n=nums2.size();
//         vector<int> v(m+n);
//         int b=m+n;
//         for(int i=0;i<(m+n);i++){
//             if(i<m) v[i]=nums1[i];
//             else v[i]=nums2[i-m];
//         }
//         sort(v.begin(),v.end());
//         if((m+n)&1) return (v[(m+n)/2]/1.0);
//         else{
//             return (v[b]+v[b-1])/2.0;

//         }
//         return 0;
        
//     }
// };