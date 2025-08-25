class Solution {
  public:
    vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
        const int INF = 100000000;  // must be exactly 1e8
        vector<int> dist(V, INF);
        dist[src] = 0;
        
        for (int i = 1; i <= V - 1; i++) {
            bool changed = false;
            for (auto &e : edges) {
                int u = e[0], v = e[1], w = e[2];
                if (dist[u] != INF && dist[u] + w < dist[v]) {
                    dist[v] = dist[u] + w;
                    changed = true;
                }
            }
            if (!changed) break;
        }
        
        for (auto &e : edges) {
            int u = e[0], v = e[1], w = e[2];
            if (dist[u] != INF && dist[u] + w < dist[v]) {
                return {-1};
            }
        }
        
        return dist;
    }
};
