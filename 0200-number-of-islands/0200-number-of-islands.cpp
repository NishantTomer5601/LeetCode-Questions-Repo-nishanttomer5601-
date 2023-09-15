class Solution {
public:
   void bfs(vector<vector<char>>& grid,int n,int m,int row, int col, vector<vector<int>> &vis){

       vis[row][col]=1;
       queue<pair<int,int>> q;
       q.push({row,col});

       while(!q.empty()){
           int r=q.front().first;
           int c=q.front().second;
         
           q.pop();

           for(int i=-1;i<=1;i++){
               for(int j=-1;j<=1;j++){
                   int nrow=r+i;
                   int ncol=c+j;

                   //diagonals need not to be checked:
                   if(i!=0 && j!=0)
                    {
                        continue;
                    }
                   if(nrow<n && nrow>=0 &&ncol>=0 &&ncol<m && grid[nrow][ncol]=='1' && !vis[nrow][ncol]){
                       vis[nrow][ncol]=1;
                       q.push({nrow,ncol});
                      

                   }
               }
           }
       }

   }


    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();

        vector<vector<int>> vis(n,vector<int>(m,0));
        int count=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' && !vis[i][j]){
                    bfs(grid,n,m,i,j,vis);
                    count++;
                }
            }
        }
        return count;
    }
};