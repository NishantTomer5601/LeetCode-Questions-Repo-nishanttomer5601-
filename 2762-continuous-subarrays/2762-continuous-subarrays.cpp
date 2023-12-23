class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        int n = nums.size();
        
        multiset<int>st; 
        
         
        int i=0,j=0;
        long long ans=0;
        
        while(i<n){
        while(j<n && (st.size()==0 || max(nums[j],*(--st.end()))-min(*st.begin(),nums[j])<=2)){
                st.insert(nums[j]);
                j++;
            }
            
            // each element in set contributes to answer (represent a subarray starting from i)
            ans+= st.size();  // we use this whenever we find subarrays either
                                       //starting or ending on a certain position in vector
             
            st.erase(st.find(nums[i])); //  we move ahead so erasing ith element from set
            i++;
        }
        return ans;
    }
};