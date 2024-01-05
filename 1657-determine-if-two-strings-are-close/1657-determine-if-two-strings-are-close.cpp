class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int> v,vv;
        unordered_map<char,int> mp,mpp;
        for(auto i:word1){
            mp[i]++;
        }
        for(auto i:word2){
            mpp[i]++;
        }
        string ch="";
        string chh="";
        
        for(auto it:mp){v.push_back(it.second);ch.push_back(it.first);}
        for(auto it:mpp){vv.push_back(it.second);chh.push_back(it.first);}
        sort(v.begin(),v.end());
        sort(vv.begin(),vv.end());
        sort(ch.begin(),ch.end());
        sort(chh.begin(),chh.end());
        
        if(v.size()!=vv.size()) return false;
        if(ch.length()!=chh.length()) return false;
        int n=v.size();
        for(int i=0;i<n;i++){
            if(v[i]!=vv[i]) return false;
        }
        for(int i=0;i<ch.length();i++){
            if(ch[i]!=chh[i])return false;
            
        }
        
        return true;
        
    }
};