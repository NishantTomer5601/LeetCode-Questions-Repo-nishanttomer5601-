class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& f, int src, int dst, int k) {
        // graph question - shortest path in a directed acyclic graph.
        // int n=f.size();
        unordered_map<int,list<pair<int,int>>> adj;

        for(int i=0;i<f.size();i++){

            //{node,amt};
            adj[f[i][0]].push_back({f[i][1],f[i][2]});
        }
        vector<int> dist(n,1e9);
        dist[src]=0;

        //Queue: {stops,{node,amt}}
        queue<pair<int,pair<int,int>>> q;
        q.push({0,{src,0}});

        while(!q.empty()){
            int stops=q.front().first;
            int node=q.front().second.first;
            int amt=q.front().second.second;
            q.pop();
            if(stops>k) continue;

            for(auto it:adj[node]){
                
                if(amt+it.second<dist[it.first]){
                    dist[it.first]=amt+it.second;
                    q.push({stops+1,{it.first,dist[it.first]}});
                }

            }

        }



        if(dist[dst]==1e9) return -1;

        return dist[dst];





    }
};