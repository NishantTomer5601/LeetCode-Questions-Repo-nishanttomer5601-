#include <vector>
#include <algorithm>

class Solution {
public:
   
    vector<int> sequentialDigits(int low, int high) {
        vector<int> v; 
        for (int start = 1; start < 9; ++start) {
            int num = start; 
            for (int nextt = start + 1; nextt < 10; ++nextt) {
                num = num * 10 + nextt; 
                if (num >= low && num <= high) {
                    v.push_back(num); 
                }
            }
        }
        
        sort(v.begin(), v.end());
       
        return v;
    }
};
