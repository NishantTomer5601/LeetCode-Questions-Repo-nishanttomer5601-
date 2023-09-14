// class Solution {
// public:
//     int minCostConnectPoints(vector<vector<int>>& points) {
        
//     }
// };

class Solution {
    int parent[100000];
    int size[100000];
    private:
    void make(int v)
    {
        parent[v]=v;
        size[v]=1;
    }
    int find(int v)
    {
        if(v==parent[v])
        return v;
        return parent[v]=find(parent[v]);
    }
    void Union(int a,int b)
    {
        a=find(a);
        b=find(b);
        if(a!=b)
        {
            if(size[a]<size[b])
            {
                swap(a,b);
            }
            parent[b]=a;
            size[a]+=size[b];
        }
    }
    
public:


    
    int minCostConnectPoints(vector<vector<int>>& points) {

        
        int n=points.size();
        int m=points[0].size();
        vector<pair<int,pair<int,int>>>edges;
        for(int i=0;i<n;i++)
        {  
            for(int j=i+1;j<n;j++)
            {
                int val1=points[i][0]-points[j][0];
                int val2=points[i][1]-points[j][1];
                 pair<int,pair<int,int>>p=make_pair(abs(val1)+abs(val2),make_pair(i,j));
                 edges.push_back(p);
            }
        }
        sort(edges.begin(),edges.end());
        for(int i=0;i<=n;i++)
        {
            make(i);
        }
        int cost=0;
        for(auto edge:edges)
        {
            int  wt=edge.first;
            int u=edge.second.first;
            int v=edge.second.second;
            if(find(u)==find(v))continue;
            Union(u,v);
            cost+=wt;
        }
        return cost;


        
    }
};