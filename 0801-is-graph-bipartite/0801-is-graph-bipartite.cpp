class Solution {
public:
   bool bfs(vector<vector<int>>& graph,int n, vector<int> &vis,int i,vector<int> &color){

       vis[i]=1;
       queue<int> q;
       q.push(i);
       color[i]=0;

       while(!q.empty()){
           int node=q.front();
           q.pop();

           for(auto &it: graph[node]){
               if(!vis[it] && color[it]==-1){
                   color[it]=!color[node];
                   vis[it]=1;
                   q.push(it);

               }
               else if(vis[it] && color[it]==color[node]){
                   return false;

               }
           }


       }
       return true;


   }


    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        
        vector<int> vis(n,0);
         vector<int> color(n,-1);
        for(int i=0;i<n;i++){
            if(!vis[i]){
              bool ans= bfs(graph,n,vis,i,color);
              if(!ans) return false;
            }
        }
return true;

        
    }
};