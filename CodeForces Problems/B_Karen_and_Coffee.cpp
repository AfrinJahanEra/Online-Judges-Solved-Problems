#include <iostream>
using namespace std;
const int M = 200005;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, k, q;
    cin >> n >> k >> q;
    int d[M] = {0};
    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        d[l]++;
        if (r + 1 < M) {
            d[r + 1]--;
        }
    }
    int c[M] = {0};
    for (int i = 1; i < M; i++) {
        c[i] = c[i - 1] + d[i];
    }
    int p[M] = {0};
    for (int i = 1; i < M; i++) {
        if (c[i] >= k) {
            p[i] = p[i - 1] + 1;
        } else {
            p[i] = p[i - 1];
        }
    }
    while (q--) {
        int a, b;
        cin >> a >> b;
        cout << p[b] - p[a - 1] << '\n';
    }
    return 0;
}