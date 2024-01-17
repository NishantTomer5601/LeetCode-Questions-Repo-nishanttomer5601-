class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int> map;
        vector<int> v;
        for(auto it:arr) map[it]++;
        for(auto it:map)v.push_back(it.second);
        
        for(int i=0;i<v.size();i++){
            int val=v[i];v[i]=-1;
            if(find(v.begin(),v.end(),val)!=v.end()) return false;
            v[i]=val;
            
        }
     return true;   
    }
};