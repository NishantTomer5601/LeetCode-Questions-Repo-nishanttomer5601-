class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int> map;
        for(int i=0;i<t.length();i++){
            map[t[i]]++;
        }
        
        int count=0;
        for(int i=0;i<s.length();i++){
            if(map.find(s[i])==map.end()) count++;
            else{
                map[s[i]]--;
                if(map[s[i]]==0) map.erase(s[i]);
            }
        }      
        
                
        
        
        return count;
        
    }
};