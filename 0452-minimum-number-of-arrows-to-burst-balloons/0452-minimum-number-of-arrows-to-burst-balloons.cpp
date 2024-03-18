class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int n=points.size();
        if(n==1) return 1;
        if(n==0) return 0; 
     
        int lastpoint = points[0][1];
        int ans = 1;
        for(auto point : points) {
            if(point[0] > lastpoint) {
                ans++;
                lastpoint = point[1];
            }
            lastpoint = min(point[1],lastpoint);
        }
        
        return ans;
        
    }
};