class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        int n=matches.size();
        set<int>w,l;
        for(int i=0;i<n;i++){
            int  winner=matches[i][0];
            int  looser=matches[i][1];
            if(l.find(winner)==l.end()) {
                w.insert(winner);
                
            }
            if(w.find(looser)!=w.end()){
                w.erase(looser);
                
            }
            l.insert(looser);
        }
        vector<int>v,vv;
        for(auto it:w){
            v.push_back(it);
        }
        
        // for(auto i:v) cout<<i<<" ";
        // cout<<endl;
        unordered_map<int,int> map;
        for(int i=0;i<n;i++){
            map[matches[i][1]]++;
        }
        
        
        
        for(auto it:map){
            if(it.second==1)
            vv.push_back(it.first);
        }
        sort(vv.begin(),vv.end());
        
        
        vector<vector<int>> ans;
        ans.push_back(v);
        ans.push_back(vv);
        
        return ans;
        
        
    }
};