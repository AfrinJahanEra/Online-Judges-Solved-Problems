#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string str;
        cin >> str;

        for (int i = 1; i <= 8; i++) {
            if (i != (str[1] - '0')) {
                cout << str[0] << i << endl;
            }
        }

        for (char ch = 'a'; ch <= 'h'; ch++) {
            if (ch != str[0]) {
                cout << ch << str[1] << endl;
            }
        }
    }

    return 0;
}
