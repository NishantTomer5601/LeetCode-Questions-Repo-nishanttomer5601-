#include<bits/stdc++.h>

class Solution {
public:
    bool isPathCrossing(string path) {
        int n=path.length();
        set<pair<int,int>> map;
        int x=0,y=0;
        map.insert({0,0});
        for(int i=0;i<n;i++){
            if(path[i]=='E'){
                x++;
                
            }
            if(path[i]=='W'){
                x--;
                
            }
            if(path[i]=='N'){
                y++;
                
            }
            if(path[i]=='S'){
                y--;
                
            }
            cout<<x<<" "<<y<<endl;
            
            if(map.find({x,y})!=map.end()) return true;
            else map.insert({x,y});
        }
        return false;
    }
};