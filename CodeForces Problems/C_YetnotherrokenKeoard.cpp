#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string input;
        cin >> input;
        string s = "";

        for (char c : input) {
            if (c == 'b') {
                for (int j = s.size() - 1; j >= 0; j--) {
                    if (islower(s[j])) {
                        s.erase(s.begin() + j);
                        break;
                    }
                }
            } else if (c == 'B') {
                for (int j = s.size() - 1; j >= 0; j--) {
                    if (isupper(s[j])) {
                        s.erase(s.begin() + j);
                        break;
                    }
                }
            } else {
                s += c;
            }
        }

        cout << s << endl;
    }

    return 0;
}
