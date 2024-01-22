class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n == 0)
            return 1;
        int ans = 10, numbers_remaining = 9, iterations = 9;
        for(int i = 0; i < n - 1; i++) {
            numbers_remaining *= iterations;
            ans += numbers_remaining;
            iterations--;
        }
        return ans;
    }
};
