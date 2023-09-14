class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        vector<vector<pair<int, int>>> adj(points.size());
        vector<int> parent(points.size(), 0);
        vector<int> key(points.size(), INT_MAX);
        vector<int> mst(points.size(), 0);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        int ans = 0;
        for (int i = 0; i < points.size(); ++i) {
            for (int j = 0; j < points.size(); ++j) {
                if (i != j) {
                    adj[i].push_back({j, abs(points[i][1] - points[j][1]) + abs(points[i][0] - points[j][0])});
                }
            }
        }
        pq.push({0, 0});
        key[0] = 0;
        while(!pq.empty()) {
            int u = pq.top().second;
            pq.pop();
            if (mst[u]) {
                continue;
            }
            mst[u] = true;
            for (int i = 0; i < adj[u].size(); ++i) {
                auto [v, w] = adj[u][i];
                if (!mst[v] && key[v] > w) {
                    key[v] = w;
                    pq.push({key[v], v});
                    parent[v] = u;
                }
            }
        }
        for (int i = 1; i < parent.size(); ++i) {
            for (int j = 0; j < adj[parent[i]].size(); ++j) {
                if (adj[parent[i]][j].first == i) {
                    ans += adj[parent[i]][j].second;
                }
            }
        }
        return ans;
    }
};

// #define ll long long
// class Solution {
// private:
    
//     ll dist(vector<vector<int>>& points,int i,int j){
//         return abs(points[i][0]-points[j][0])+abs(points[i][1]-points[j][1]);

//     }

// public:
//     int minCostConnectPoints(vector<vector<int>>& points) {
//         int n=points.size();
//         unordered_map<int,list<pair<int,ll>>> adj;

//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 if(i==j) continue;
//                 adj[i].push_back({j,dist(points,i,j)});
//                 adj[j].push_back({i,dist(points,i,j)});

//             }
//         }

//         vector<int> vis(n,0);
//         ll sum=0;

//         priority_queue<pair<ll,int>,vector<pair<ll,int>> ,greater<pair<ll,int>>> pq;
//         pq.push({0,0});
//         while(!pq.empty()){
//             auto top=pq.top();
//             ll dist=top.first;
//             int node=top.second;
//             pq.pop();

//             if(vis[node]==1) continue;

//             vis[node]=1;
//             sum+=dist;

//             for(auto ngh:adj[node]){
//                 int nn=ngh.first;
//                 int d=ngh.second;
//                 if(!vis[nn]){
//                     pq.push({d,nn});
//                 }
//             }
//         }

//         return (int)sum;
//     }
// };

// // class Solution {
// //     int parent[100000];
// //     int size[100000];
// //     private:
// //     void make(int v)
// //     {
// //         parent[v]=v;
// //         size[v]=1;
// //     }
// //     int find(int v)
// //     {
// //         if(v==parent[v])
// //         return v;
// //         return parent[v]=find(parent[v]);
// //     }
// //     void Union(int a,int b)
// //     {
// //         a=find(a);
// //         b=find(b);
// //         if(a!=b)
// //         {
// //             if(size[a]<size[b])
// //             {
// //                 swap(a,b);
// //             }
// //             parent[b]=a;
// //             size[a]+=size[b];
// //         }
// //     }
    
// // public:


    
// //     int minCostConnectPoints(vector<vector<int>>& points) {

        
// //         int n=points.size();
// //         int m=points[0].size();
// //         vector<pair<int,pair<int,int>>>edges;
// //         for(int i=0;i<n;i++)
// //         {  
// //             for(int j=i+1;j<n;j++)
// //             {
// //                 int val1=points[i][0]-points[j][0];
// //                 int val2=points[i][1]-points[j][1];
// //                  pair<int,pair<int,int>>p=make_pair(abs(val1)+abs(val2),make_pair(i,j));
// //                  edges.push_back(p);
// //             }
// //         }
// //         sort(edges.begin(),edges.end());
// //         for(int i=0;i<=n;i++)
// //         {
// //             make(i);
// //         }
// //         int cost=0;
// //         for(auto edge:edges)
// //         {
// //             int  wt=edge.first;
// //             int u=edge.second.first;
// //             int v=edge.second.second;
// //             if(find(u)==find(v))continue;
// //             Union(u,v);
// //             cost+=wt;
// //         }
// //         return cost;


        
// //     }
// // };