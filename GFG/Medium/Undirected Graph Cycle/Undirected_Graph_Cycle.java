import java.util.*;

class Solution {
    public boolean isCycle(int V, int[][] edges) {
        // Build adjacency list
        List<List<Integer>> adj = new ArrayList<>();
        for (int i = 0; i < V; i++) adj.add(new ArrayList<>());

        for (int[] edge : edges) {
            int u = edge[0], v = edge[1];
            adj.get(u).add(v);
            adj.get(v).add(u); // undirected graph
        }

        boolean[] visited = new boolean[V];

        // Check all components
        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                if (dfs(i, -1, visited, adj)) {
                    return true; // cycle found
                }
            }
        }

        return false; // no cycle
    }

    // DFS helper function
    private boolean dfs(int node, int parent, boolean[] visited, List<List<Integer>> adj) {
        visited[node] = true;

        for (int neigh : adj.get(node)) {
            if (!visited[neigh]) {
                if (dfs(neigh, node, visited, adj)) return true;
            } 
            // if neighbor is visited and not parent -> cycle
            else if (neigh != parent) {
                return true;
            }
        }

        return false;
    }
}
