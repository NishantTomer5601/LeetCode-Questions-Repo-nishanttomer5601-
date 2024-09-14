class Solution {
public:
vector<int> r={-1,0,1,0};
vector<int> c={0,1,0,-1};
vector<vector<vector<int>>> mem;
bool solve(vector<vector<int>>& grid, int health,int n,int m,int i, int j,vector<vector<int>>&visited){
    if(i==n-1 && j==m-1){
        return grid[i][j]==1 && health==1?  false:true;
        if(grid[i][j]==1 && health>1) return true;
        if(grid[i][j]==0 && health>=1) return true;
        return false;

    }
    

    if(i>=n || j>=m ||i<0||j<0|| visited[i][j]|| health<=0) return false;
    if(mem[i][j][health]!=-1) return mem[i][j][health];
if(grid[i][j]==1) health--;
if(health<=0) return false;
    visited[i][j]=1;
    

    
        //int a=0,b=0,c=0,d=0;
        for(int x=0;x<4;x++){
            int nr=i+r[x];
            int nc=j+c[x];
            
  if(solve(grid,health,n,m,nr,nc,visited)){

     return  mem[i][j][health]=true;
     }
        

    }
    visited[i][j]=0;
    return  mem[i][j][health]=false;;
}
  

    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        mem=vector<vector<vector<int>>> (n,vector<vector<int>>(m,vector<int>(health+1,-1)));
        queue<pair<int,pair<int,int>>> pq;
        if(health<1 && grid[0][0]==1) return false;

        pq.push({0,{0,health-grid[0][0]}});
        visited[0][0]=health-grid[0][0];


        while(!pq.empty()){
            auto top=pq.front();
            int row=top.first;
            int col=top.second.first;

            int newHealth=top.second.second;
            pq.pop();


            if(row==n-1 && col==m-1){
                if(newHealth)return true;
                else
                continue;

    }

for(int x=0;x<4;x++){
            int nr=row+r[x];
            int nc=col+c[x];
            
  if(nr>=0 && nr<n && nc>=0 &&nc<m){

     int nhealth=newHealth-grid[nr][nc];
     if(nhealth>0 &&nhealth>visited[nr][nc]){
        pq.push({nr,{nc,nhealth}});
        visited[nr][nc]=nhealth;
     }
     }
        

    }



        }
        return false;
               
    }
};