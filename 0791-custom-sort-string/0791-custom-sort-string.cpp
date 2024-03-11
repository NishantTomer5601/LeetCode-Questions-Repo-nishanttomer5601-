class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char, int> map;
        for(auto it : s)map[it]++;
        string ans = "";
        
        for(auto it : order){
             if(map.find(it) != map.end()){
                 int freq = map[it];
                 while(freq-->0)ans+= it;
                 map[it] = 0;
             }
        }
        for(auto it : s){
            if(map[it] != 0){
                ans += it;
                map[it]--;
            }
        }
        return ans;
    }
};