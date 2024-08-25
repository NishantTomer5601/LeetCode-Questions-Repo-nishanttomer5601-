class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int n= nums.size();
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(int i=0;i<n;i++){
            pq.push({nums[i],i});
        }
        while(k--){
            pair<int,int> p=pq.top();
            pq.pop();
            nums[p.second]=multiplier*p.first;
            pq.push({multiplier*p.first,p.second});

        }
        return nums;

        
    }
};