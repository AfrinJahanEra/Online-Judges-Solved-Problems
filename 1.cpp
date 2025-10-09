#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int q;
    cin >> q;
    vector<pair<int,int>> cuts;
    for (int i = 0; i < q; i++) {
        int u, v;
        cin >> u >> v;
        cuts.push_back({u, v});
        cuts.push_back({v, u});
    }

    vector<int> vis(n + 1, 0);
    vector<int> depth(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            queue<int> Q;
            Q.push(i);
            vis[i] = 1;
            depth[i] = 0;
            while (!Q.empty()) {
                int u = Q.front();
                Q.pop();
                for (int v : adj[u]) {
                    bool cut = false;
                    for (auto e : cuts) {
                        if (e.first == u && e.second == v) {
                            cut = true;
                            break;
                        }
                    }
                    if (!vis[v] && !cut) {
                        vis[v] = 1;
                        depth[v] = depth[u] + 1;
                        Q.push(v);
                    }
                }
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << 2 * depth[i] << " ";
    }
    cout << "\n";

    return 0;
}
