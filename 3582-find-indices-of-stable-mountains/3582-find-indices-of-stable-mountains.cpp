class Solution {
public:
    vector<int> stableMountains(vector<int>& h, int t) {
        int n=h.size();
        vector<int> r;
        for(int i=1;i<n;i++){
           if (h[i-1]>t) r.push_back(i);
        }
        return r;
    }
};