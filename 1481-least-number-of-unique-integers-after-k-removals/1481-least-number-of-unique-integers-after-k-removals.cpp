class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        int n=arr.size();
        unordered_map<int,int> map;
        vector<pair<int,int>>v;
        for(auto it:arr){
            map[it]++;
        }
        for(auto it:map){
            v.push_back({it.second,it.first});
        }
        
        sort(v.begin(),v.end());
        int count=0,i=0;
        int m=v.size();
        while(k>0 && i<m){
            if(v[i].first>k){
                break;
                
            }
            k-=v[i].first;
            i++;
        }
        return m-i;
        
    }
};