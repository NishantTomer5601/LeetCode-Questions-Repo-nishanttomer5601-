class Solution {
public:
    int combi(int n, int k){
        long long int res = 1;
 
    // Since C(n, k) = C(n, n-k)
    if (k > n - k)
        k = n - k;
 
    // Calculate value of
    // [n * (n-1) *---* (n-k+1)] / [k * (k-1) *----* 1]
    for (int i = 0; i < k; ++i) {
        res *= (n - i);
        res /= (i + 1);
    }
 
    return res;
    }
    vector<int> getRow(int rowIndex) {
        int n = rowIndex;
        vector<int> res;
        int r = 0;
        while(r <= rowIndex){
            int x = combi(n, r);
            res.push_back(x);
            r++;
        }
        return res;
    }
};