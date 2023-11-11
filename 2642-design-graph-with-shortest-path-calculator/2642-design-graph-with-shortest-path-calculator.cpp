class Graph {
public:
    Graph(int n, vector<vector<int>>& edges) {
        for (const auto& edge : edges) {
            int from = edge[0];
            int to = edge[1];
            int cost = edge[2];
            graph[from].push_back({to, cost});
        }
    }
    
    void addEdge(vector<int> edge) {
        int from = edge[0];
        int to = edge[1];
        int cost = edge[2];
        graph[from].push_back({to, cost});
    }
    
    int shortestPath(int start, int end) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        unordered_map<int, int> distances;

        pq.push({0, start});
        distances[start] = 0;

        while (!pq.empty()) {
            int cost = pq.top().first;
            int current = pq.top().second;
            pq.pop();

            if (current == end) {
                return cost;
            }

            for (const auto& neighbor : graph[current]) {
                int neighborNode = neighbor.first;
                int edgeCost = neighbor.second;

                if (!distances.count(neighborNode) || cost + edgeCost < distances[neighborNode]) {
                    distances[neighborNode] = cost + edgeCost;
                    pq.push({cost + edgeCost, neighborNode});
                }
            }
        }

        return -1;
    }
    private:
    unordered_map<int, vector<pair<int, int>>> graph;

};

/**
 * Your Graph object will be instantiated and called as such:
 * Graph* obj = new Graph(n, edges);
 * obj->addEdge(edge);
 * int param_2 = obj->shortestPath(node1,node2);
 */