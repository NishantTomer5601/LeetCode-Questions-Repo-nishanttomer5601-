#include<math.h>
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
     // O(nlogn approach as sorting is being used)

     /*   sort(nums.begin(),nums.end());

        for(int i=0;i<n;i++){
            if((i+1<n) && nums[i]==nums[i+1]){
                ans.push_back(nums[i]);
            }

        }

       return ans;
*/
  for(int i=0;i<n;i++){

      int gotoindex=abs(nums[i]);

      if(nums[gotoindex-1]>0){
          int temp=nums[gotoindex-1];
          nums[gotoindex-1]= -1* temp;
      }
      else{
          ans.push_back(abs(nums[i]));
      }
  }
      
return ans;
    }
};