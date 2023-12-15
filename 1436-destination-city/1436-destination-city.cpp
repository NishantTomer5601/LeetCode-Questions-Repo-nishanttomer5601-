class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        vector<string> v;
        for(int i=0;i<paths.size();i++){
            v.push_back(paths[i][0]);
        }
        for(int i=0;i<paths.size();i++){
            if(find(v.begin(),v.end(),paths[i][1])==v.end()) return paths[i][1];
        }
        return "";
    }
};