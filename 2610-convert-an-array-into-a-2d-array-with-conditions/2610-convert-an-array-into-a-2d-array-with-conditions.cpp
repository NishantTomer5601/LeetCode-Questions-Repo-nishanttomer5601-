class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int n=nums.size();
        
      // if(n==1) return nums;

        unordered_map<int,int> map;
        for(int i=0;i<n;i++){
            map[nums[i]]++;
        }
      pair<int,int> p(0,0);
      int c=0;

        for(auto it:map){
            if(it.second>=c){
                p=it;
                c=it.second;
            }
            
        }
        int rows=c;
        vector<vector<int>> ans;

     for(int j=0;j<rows;j++){
            vector<int>temp;

            for(auto& i:map){
                if(i.second>0) {
                    temp.push_back(i.first);
                    i.second--;
                }
            }
            ans.push_back(temp);
        }
        return ans;

        
    }
};