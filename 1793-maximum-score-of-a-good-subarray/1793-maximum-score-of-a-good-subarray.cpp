class Solution {
public:
    vector<int> solve(vector<int> v){
        int n = v.size();
        vector<int> ans(n);
        ans[n - 1] = n;
        stack<int> st;
        st.push(n - 1);
        for(int i = n - 2; i >= 0; i--){
            while(!st.empty() && v[st.top()] >= v[i]) st.pop();
            if(st.empty()) ans[i] = n;
            else ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }
    
    vector<int> solve2(vector<int> v){
        int n = v.size();
        vector<int> ans(n);
        ans[0] = -1;
        stack<int> st;
        st.push(0);
        for(int i = 1; i < n; i++){
            while(!st.empty() && v[st.top()] >= v[i]) st.pop();
            if(st.empty()) ans[i] = -1;
            else ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }
    
    int maximumScore(vector<int>& nums, int k) {
        int n = nums.size(), ans = 0;
        vector<int> NSE = solve(nums);
        vector<int> PSE = solve2(nums);
        for(int i = 0; i < n; i++){
            int l = PSE[i], r = NSE[i];
            if(k > l && k < r){
                ans = max(ans, nums[i] * (r - l - 1));
            }
        }
        return ans;
    }
};