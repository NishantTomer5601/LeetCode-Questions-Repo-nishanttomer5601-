class Solution {
public:
    vector<string> uncommonFromSentences(string s, string t) {
        int n=s.length();
        int m=t.length();
        vector<string> ans;
        unordered_map<string,int> map;
        unordered_map<string,int> mapp;
        string a="";
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                map[a]++;
                a="";
                continue;
            } 
            a+=s[i];
        }
        map[a]++;
       // for(auto it: map) cout<<it.first<<" ";
        string b="";
        for(int i=0;i<m;i++){
            if(t[i]==' '){
                map[b]++;
                b="";
                continue;
            } 
            b+=t[i];
        }
        map[b]++;
        
        for(auto it:map){
            if(it.second==1){
                if(mapp.find(it.first)==mapp.end())ans.push_back(it.first);
            }
        }
        for(auto it:mapp){
            if(it.second==1){
                if(map.find(it.first)==map.end())ans.push_back(it.first);
            }
        }
        
        
        return ans;
        
    }
};