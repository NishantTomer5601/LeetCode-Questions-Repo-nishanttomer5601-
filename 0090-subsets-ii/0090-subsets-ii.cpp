class Solution {
public:
    vector<vector<int>> ans; set<vector<int>> s; vector<int> v;
    
    void solve(vector<int>& can,int n, int i){
      if(i>=n){
           s.insert(v);
           return;
           
       } 
       
       
       solve(can,n,i+1);
        v.push_back(can[i]);
        solve(can,n,i+1);
           v.pop_back();
       
       

   }
    
    
    vector<vector<int>> subsetsWithDup(vector<int>& can) {
        int n=can.size();
        
        sort(can.begin(),can.end());
        solve(can,n,0);
    for(auto it:s){
        ans.push_back(it);
    }
        
        return ans;
    }
        
    
};