#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int n;
    cin >> n >> s;
    int o = 0, z = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            o++;
        } else {
            z++;
        }
    }
    if (z != o) {
        cout << 1 << endl << s;
    } else {
        cout << 2 << endl << s.substr(0, s.length() - 1) << ' ' << s[s.length() - 1];
    }
    return 0;
}
