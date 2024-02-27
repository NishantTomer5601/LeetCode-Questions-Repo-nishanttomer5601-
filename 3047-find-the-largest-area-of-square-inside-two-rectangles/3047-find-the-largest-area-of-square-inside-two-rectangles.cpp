#define  ll long long

class Solution {
public:

    long long largestSquareArea(vector<vector<int>>& bottomLeft, vector<vector<int>>& topRight) {
        ll ans=-1e2;
        int n=bottomLeft.size();
        for(int i=0;i<n;i++){
           

            for(int j=i+1;j<n;j++){
            long long minimum_x = max(bottomLeft[i][0], bottomLeft[j][0]);
                long long maximum_x = min(topRight[i][0], topRight[j][0]);
                long long minimum_y = max(bottomLeft[i][1], bottomLeft[j][1]);
                long long maximum_y = min(topRight[i][1], topRight[j][1]);
                
                if(minimum_x<maximum_x && minimum_y<maximum_y){
                    long long s = min(maximum_x-minimum_x, maximum_y-minimum_y);
                    ans = max(ans, s*s);
                }
            
            }
        }
        return ans>0?ans:0;
    }
};