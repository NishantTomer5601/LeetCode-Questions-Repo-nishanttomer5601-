class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int n=words.size();
        unordered_map<char,int> map;
        for(int i=0;i<n;i++){
            for(int j=0;j<words[i].length();j++){
                map[words[i][j]]++;
            }
        }
        bool check=true;
        for(auto it:map){
            if(it.second%n!=0) return false;
        }
        
        
        if(check) return true;
        return false;
        
    }
};