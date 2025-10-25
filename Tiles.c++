#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll w, h;
    cin >> w >> h;
    ll res = 4;

    for (int i = 2; i <= w; i++) {
        res = (res * 2) % 998244353;
    }
    for (int i = 2; i <= h; i++) {
        res = (res * 2) % 998244353;
    }

    cout << res;
    return 0;
}
