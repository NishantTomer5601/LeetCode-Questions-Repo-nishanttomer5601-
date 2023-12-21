class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& p) {
        int n=p.size();
        sort(p.begin(),p.end());
        int ans=0;
        for(int i=1;i<n;i++){
            ans=max(ans,p[i][0]-p[i-1][0]);
        }
        return ans;
    }
};