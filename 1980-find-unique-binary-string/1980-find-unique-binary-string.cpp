class Solution {
public:
    
    string ans="";
    void solve(vector<string>& nums,int n, string tans,unordered_map<string,bool> &map){
        //base case:
        if(tans.length()==n){
            if(map.find(tans)==map.end()){
                ans=tans;
                return;
            }
            else{
                return;
            }
        }
        
        
        solve(nums,n,tans+"1",map);
        solve(nums,n,tans+"0",map);
        
    }
    string findDifferentBinaryString(vector<string>& nums) {
        int n=nums.size();
        unordered_map<string,bool> map;
        for(int i=0;i<n;i++){
            map[nums[i]]=1;
        }
        
         
        string tans="";
        solve(nums,n,tans,map);
        
        return ans;
        
    }
};