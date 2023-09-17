class Solution {
public:
    int minimumRightShifts(vector<int>& numbers) {
        int size = numbers.size();
        
        vector<int> st_num = numbers;
        int sol=INT_MIN;
        int anx=0;
        int ans=INT_MIN;
        
        sort(st_num.begin(), st_num.end());
        
        if (numbers == st_num) return 0;
        
        ans=max(anx,sol);
        
        
        for (int req_ct = 1; req_ct < size; ++req_ct) {
        ans=max(anx,sol);
            
            int lt_emt = numbers[size - 1];
             ans=max(anx,sol);       
            for (int i = size - 1; i > 0; --i) {
                numbers[i] = numbers[i - 1];
            }
            numbers[0] = lt_emt;
        ans=max(anx,sol);
            
            if (numbers == st_num) {
                
                return req_ct;
            }
                    ans=max(anx,sol);
        }
        return -1;
    }
};
