

class Solution {
public:
    #define ll long long
    int numberOfArithmeticSlices(vector<int>& nums) {

       int n = nums.size(); 
        ll ans = 0;
       vector<unordered_map<ll,ll>> v(n);
       for(int i=1; i<n; i++) {
           for(int j=0; j<i; j++) {
               ll d = 1LL*nums[i] - 1LL*nums[j];
               if(v[j].find(d) != v[j].end()) {
                   v[i][d] += v[j][d] + 1;
                   ans += v[j][d];
               }
               else {
                   v[i][d]++;
               }
           }
       }
       return ans;
    }
};