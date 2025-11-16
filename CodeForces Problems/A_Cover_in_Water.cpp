#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int count = 0, total = 0;

        for (int i = 0; i < s.length(); i++) {
            if (i + 2 < s.length() && s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.') {
                count += 2;
                total += 3;
                i += 2;
            } else {
                if (total != 0) {
                    total--;
                } else {
                    count++;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}
