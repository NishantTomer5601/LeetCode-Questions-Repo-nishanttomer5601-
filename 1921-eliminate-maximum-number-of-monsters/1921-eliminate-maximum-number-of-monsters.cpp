  // solving greedily by using the reaching time as deciding criterian..
class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n=dist.size();
        vector<int> t(n);
        for(int i=0;i<n;i++){
            t[i]=(dist[i]+speed[i]-1)/speed[i];

        }
        sort(t.begin(),t.end());

        int ans=0,curr_time=0;
        for(int i=0;i<n;i++){

            if(curr_time>=t[i]){
                return ans;

            }
            ans++;
            curr_time++;

        }
        return ans;
    }
};