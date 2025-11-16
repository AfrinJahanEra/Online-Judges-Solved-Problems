#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        
        if ((s[0] != '1') || (s[n-1] != '1')) {
            cout << "NO\n";
            continue;
        }
        
        int cnt = 0;
        for (char c : s) {
            if (c == '1') {
                cnt++;
            }
        }
        
        if (cnt % 2 != 0) {
            cout << "NO\n";
            continue;
        }
        
        string a, b;
        int k = 0;
        int f = 0;
        
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                if (k < cnt/2) {
                    a += '(';
                    b += '(';
                } else {
                    a += ')';
                    b += ')';
                }
                k++;
            } else {
                if (f == 0) {
                    a += '(';
                    b += ')';
                } else {
                    a += ')';
                    b += '(';
                }
                f = 1 - f;
            }
        }
        
        cout << "YES\n";
        cout << a << "\n";
        cout << b << "\n";
    }
    return 0;
}