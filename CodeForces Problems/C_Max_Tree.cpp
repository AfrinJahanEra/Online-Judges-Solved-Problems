#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> graph(n+1);
        vector<int> in_degree(n+1, 0);
        
        for (int i = 0; i < n-1; i++) {
            int u, v, x, y;
            cin >> u >> v >> x >> y;
            if (x >= y) {
                graph[u].push_back(v);
                in_degree[v]++;
            } else {
                graph[v].push_back(u);
                in_degree[u]++;
            }
        }
        
        queue<int> q;
        for (int i = 1; i <= n; i++) {
            if (in_degree[i] == 0) {
                q.push(i);
            }
        }
        
        vector<int> order;
        while (!q.empty()) {
            int u = q.front();
            q.pop();
            order.push_back(u);
            for (int v : graph[u]) {
                in_degree[v]--;
                if (in_degree[v] == 0) {
                    q.push(v);
                }
            }
        }
        
        vector<int> res(n+1);
        int num = n;
        for (int u : order) {
            res[u] = num;
            num--;
        }
        
        for (int i = 1; i <= n; i++) {
            cout << res[i] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}