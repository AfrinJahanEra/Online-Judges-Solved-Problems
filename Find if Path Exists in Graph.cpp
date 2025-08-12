#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        // Build adjacency list
        vector<vector<int>> graph(n);
        for (auto &e : edges) {
            graph[e[0]].push_back(e[1]);
            graph[e[1]].push_back(e[0]);
        }

        // BFS traversal
        vector<bool> visited(n, false);
        queue<int> q;
        q.push(source);
        visited[source] = true;

        while (!q.empty()) {
            int node = q.front();
            q.pop();

            if (node == destination) return true;

            for (int neighbor : graph[node]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }
        return false;
    }
};

int main() {
    Solution sol;

    int n = 6;
    vector<vector<int>> edges = {{0,1},{0,2},{3,5},{5,4},{4,3}};
    int source = 0, destination = 5;

    bool result = sol.validPath(n, edges, source, destination);
    cout << (result ? "true" : "false") << endl;

    return 0;
}
