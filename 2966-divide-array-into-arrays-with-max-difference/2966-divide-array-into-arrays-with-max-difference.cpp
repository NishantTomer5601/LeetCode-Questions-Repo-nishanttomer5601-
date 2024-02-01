class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>> ans;
        //vector<vector<int>> anss;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n%3) return ans;
        bool check=true;
        for(int i=0;i<n;){
            vector<int> v(3,0);
            if(i+2<n && (nums[i+2]-nums[i])<=k){
                for(int j=0;j<3;j++){
                    v[j]=nums[i+j];
                }
                ans.push_back(v);

            }
            else{
                check=false;
                break;
            }
            i+=3;
        }
        if(!check) return {};




        return ans;
    }
};