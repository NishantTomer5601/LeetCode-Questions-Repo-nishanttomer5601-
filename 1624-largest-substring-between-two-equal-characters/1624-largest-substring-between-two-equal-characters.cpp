class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int ans=-1;
        unordered_map<char,int> map;
        for(int i=0;i<s.length();i++){
            if(map.find(s[i])==map.end()){
                map[s[i]]=i;
            }
            else{
                ans=max(ans,i-map[s[i]]-1);
              //  map[s[i]]=i;
            }

            
        }
        

        return ans;
    }
};