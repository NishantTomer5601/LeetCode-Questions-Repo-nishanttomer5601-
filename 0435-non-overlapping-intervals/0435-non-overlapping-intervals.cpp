class Solution {
public:

    int eraseOverlapIntervals(vector<vector<int>>&points) {

        sort(points.begin(),points.end());

        int  end = points[0][1], count = 0;

        for(int i = 1; i < points.size(); ++i)
        {
            if(end > points[i][0])
            {
                end = min(end, points[i][1]);
                count++; 
            }

            else end = points[i][1];
                    
        }
         return count; 
    }
};