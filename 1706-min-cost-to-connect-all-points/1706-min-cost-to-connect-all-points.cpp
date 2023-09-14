// type conversion also takes time and sometimes can lead to TLE: as in thsi question:
class Solution {
private:
    
    int dist(vector<vector<int>>& points,int i,int j){
        return abs(points[i][0]-points[j][0])+abs(points[i][1]-points[j][1]);

    }

public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n=points.size();
        unordered_map<int,list<pair<int,int>>> adj;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j) continue;
                adj[i].push_back({j,dist(points,i,j)});
                adj[j].push_back({i,dist(points,i,j)});

            }
        }

        vector<int> vis(n,0);
        int sum=0;

        priority_queue<pair<int,int>,vector<pair<int,int>> ,greater<pair<int,int>>> pq;
        pq.push({0,0});
        while(!pq.empty()){
            auto top=pq.top();
            int dist=top.first;
            int node=top.second;
            pq.pop();

            if(vis[node]==1) continue;

            vis[node]=1;
            sum+=dist;

            for(auto ngh:adj[node]){
                int nn=ngh.first;
                int d=ngh.second;
                if(!vis[nn]){
                    pq.push({d,nn});
                }
            }
        }

        return sum;
    }
};
