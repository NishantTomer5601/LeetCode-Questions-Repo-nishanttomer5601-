class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& h) {
        int n=h.size();
        int m=h[0].size();

        vector<vector<int>> dist(n,vector<int> (m,1e9));
        dist[0][0]=0;
        priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>,
        greater<pair<int,pair<int,int>>>> pq;
        pq.push({0,{0,0}});
        int dr[4]={-1,0,1,0};
        int dc[4]={0,1,0,-1};

        while(!pq.empty()){
            int diff=pq.top().first;
            int row=pq.top().second.first;
            int col=pq.top().second.second;

            pq.pop();

            for(int i=0;i<4;i++){
     
                int nr=row+dr[i];
                int nc=col+dc[i];

                if(nr>=0 && nr<n && nc>=0 && nc<m ){

                    //quite important and bit different steps: REMEMBER
                    int effort=max(abs(h[nr][nc]-h[row][col]),diff);
                    if(dist[nr][nc]>effort){
                        dist[nr][nc]=effort;
                        pq.push({effort,{nr,nc}});
                    }

                }



            }
        }
        return dist[n-1][m-1];
        
    }
};