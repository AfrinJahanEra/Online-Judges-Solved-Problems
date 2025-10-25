#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string str;
        cin >> str;
        char ch;
        char ch1;
        for (int i = 0; i < n; i++) {
            if (i + 2 < n && str[i + 2] == '0'&& str[i + 3] != '0') {
                ch1 = str[i];
                ch = char(96 + (10 * (ch1 - '0') + (str[i + 1] - '0')));
                cout << ch;
                i = i + 2;
            }
            else {
                ch = char(96 + (str[i] - '0'));
                cout << ch;
            }
        }
        cout << endl;
    }
    return 0;
}
