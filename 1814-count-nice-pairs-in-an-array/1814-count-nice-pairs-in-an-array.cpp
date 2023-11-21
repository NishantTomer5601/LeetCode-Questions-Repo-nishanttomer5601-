#define ll long long 
class Solution {
public:
    int mod=1e9+7;
    int countNicePairs(vector<int>& nums) {
        int n=nums.size();
        ll count=0;
        unordered_map<int,int> map;
        
        vector<int> r;
        for(int i=0;i<n;i++){
            string s=to_string(nums[i]);
            reverse(s.begin(),s.end());
            r.push_back(stoi(s));
            
            if(map.find(nums[i]-r[i])!=map.end()){
                count=(count+map[nums[i]-r[i]])%mod;
                map[nums[i]-r[i]]++;
            }
            else{
                map[nums[i]-r[i]]++;
            }
        }
        
       return (int)(count)%mod;
    }
};