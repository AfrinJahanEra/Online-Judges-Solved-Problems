#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

typedef long long ll;

int main() {
    ll x[4], a, b, c;

    for (int i = 0; i < 4; i++) {
        cin >> x[i];
    }

    sort(x, x + 4);

    a = x[3] - x[2];
    b = x[3] - x[1];
    c = x[3] - x[0];

    cout << a << " " << b << " " << c;

    return 0;
}
