class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        set<pair<int,int>> s;
        int count=0;
        for(int i=0;i<mat.size();i++){
            count=0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1) count++;
                else break;
                
            }
            s.insert({count,i});
            
        }
        vector<int> ans;
        int kk=0;
        for(auto it:s){
            if(kk==k) break;
            kk++;
            ans.push_back(it.second);
        }
        return ans;
    }
};