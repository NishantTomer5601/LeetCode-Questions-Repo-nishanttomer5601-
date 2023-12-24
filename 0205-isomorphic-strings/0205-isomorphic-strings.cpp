class Solution {
public:
    bool isIsomorphic(string s, string t) {
       
        int n=s.length();
        int m=t.length();
        unordered_map<char,char> mp;
        vector<int> v;
        
        for(int i=0;i<n;i++){
            if(mp.find(s[i])==mp.end()){
                if(find(v.begin(),v.end(),t[i]) !=v.end()) return false;
                mp[s[i]]=t[i];
                v.push_back(t[i]);
            }
            else{
                if(mp[s[i]]!=t[i]) return false;
                
            }
        }
        return true;


    }
};