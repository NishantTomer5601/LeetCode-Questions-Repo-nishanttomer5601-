class Solution {
public:
    int numOfArrays(int n, int m, int k) {
        
        const int mod = 1e9 + 7;
        vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(m + 2, vector<int>(k + 1, -1)));
        
        // Defining a lambda to avoid passing too much params by reference
        function<int(int, int, int)> getWays = [&](int index, int prevMax, int cost) {
            
            // if cost at any times exceeds k no valid ways to build array ahead
            if(cost > k) {
                return 0;
            }

            // Whole array is built now if our cost is exactly k 
            // we found a way to build array
            if(index == n) {
                return (int)(cost == k);
            }

            // return if result cached previously
            if(dp[index][prevMax + 1][cost] != -1) {
                return dp[index][prevMax + 1][cost];
            }

            // no base case executed so we have to calculate answer recursively
            int ways = 0;

            // add up all ways by putting every element in [1, m]
            for(int element = 1; element <= m; element++) {
                if(element > prevMax) { // max & cost updation
                    ways = (ways + getWays(index + 1, element, cost + 1)) % mod;
                }
                else { // no updation as chosem element <= prevMax
                    ways = (ways + getWays(index + 1, prevMax, cost)) % mod;
                }
            }

            // cache & return recursively calculated answer
            return dp[index][prevMax + 1][cost] = ways;
        };

        return getWays(0, -1, 0);
    }
};