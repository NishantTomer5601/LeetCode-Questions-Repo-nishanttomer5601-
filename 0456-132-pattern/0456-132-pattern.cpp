class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n=nums.size();
        if(n<3) return false;
        stack<int> s;
        s.push(nums[n-1]);
        vector<int> mini(n);
        mini[0]=nums[0];
        for(int i=1;i<n;i++){
            mini[i]=min(nums[i],mini[i-1]);
        }

        for(int i=n-2;i>=1;i--){
            if(nums[i]>mini[i-1]){
                while(!s.empty() && s.top()<=mini[i-1]) s.pop();
                if(!s.empty() && s.top()<nums[i]) return true;
                

            }
            s.push(nums[i]);

        }
        return false;
        
    }
};