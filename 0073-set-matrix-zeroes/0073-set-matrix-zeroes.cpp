class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        vector<pair<int,int>> v;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==0) v.push_back({i,j});
            }
        }

        for(int i=0;i<v.size();i++){
            int a=v[i].first;
            int b=v[i].second;
            for(int j=0;j<mat[a].size();j++){
               
                    mat[a][j]=0;
                
            }
            for(int j=0;j<mat.size();j++){
               
                    mat[j][b]=0;
                
            }
        }

        
    }
};