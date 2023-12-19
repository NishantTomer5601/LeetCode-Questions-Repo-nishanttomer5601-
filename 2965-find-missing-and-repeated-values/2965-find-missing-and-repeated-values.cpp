class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int> ans(2,0);
        unordered_map<int,bool> map;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(map[grid[i][j]]==true){
                    ans[0]=grid[i][j];
                }
                else{
                    map[grid[i][j]]=true;
                }
            }
        }
        for(int i=1;i<=n*n;i++){
            if(map[i]==false) ans[1]=i;
            
        }
        return ans;
    }
};