/*class Solution {
public:
   void solve(vector<int>& nums,vector<int>& ans,int target,int s, int e){
       // Base case:
       if(s>e){
           return;
       }

       int mid=s+(e-s)/2;

       if(nums[mid]>target){
           solve(nums,ans,target,s,mid-1);
       }
       else if(nums[mid]<target){
           solve(nums,ans,target,mid+1,e);
       }
       else{
           if(mid>ans[1]){
           ans[1]=mid;
           solve(nums,ans,target,s,mid-1);
           }
           else{
               ans[0]=mid;
               solve(nums,ans,target,mid+1,e);
           }
       }
   }

    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> ans(2);
        ans[0]=INT_MAX;
        ans[1]=INT_MIN;
        int s=0;
        int e=n-1;
        solve(nums,ans,target,s,e);
        
        if(ans[0]==INT_MAX && ans[1]!=INT_MIN){
            ans[0]=ans[1];

        }
        if(ans[0]==INT_MAX && ans[1]==INT_MIN){
            ans[0]=-1;
            ans[1]=-1;
        }
        
        return ans;
    }
};





*/
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        pair<vector<int>::iterator,vector<int>::iterator> range;
        range = equal_range(nums.begin(), nums.end(), target);
        int targetleft = distance(nums.begin(), range.first);
        if (targetleft == nums.size() || nums[targetleft] != target) return {-1, -1};
        return {targetleft, (int)distance(nums.begin(), range.second) - 1};
    }
};