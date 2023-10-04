#include<bits/stdc++.h>
class Solution {
public:
    int edgeScore(vector<int>& edges) {
        int n=edges.size();
        
        unordered_map<int,list<int>> map;
        
        for(int i=0;i<n;i++){
            map[edges[i]].push_back(i);
            
        }
     
        long long sum=-1e8;int ind=INT_MAX;
        for(auto it:map){
            long long s=0;
            for(auto itt:it.second){
                s+=itt;
                
            }
            if(s>=sum){
                if(s==sum){
                ind=min(it.first,ind);
                }
                else ind=it.first;
                sum=s;
            }
            
            
        }
        return ind;
        
    }
};