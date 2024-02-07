class Solution {
public:
    string frequencySort(string s) {
        vector<pair<int,char>> v;
        int n=s.length();
        unordered_map<char,int> map;
        for(int i=0;i<n;i++){
            map[s[i]]++;            
        }
        for(auto it:map){
            v.push_back({it.second,it.first});
        }
        sort(v.begin(),v.end(),greater());
        string ans;
        for(auto it:v){
            int x=it.first;
            while(x--)
            ans+=it.second;
        }
        
        return ans;
    }
};