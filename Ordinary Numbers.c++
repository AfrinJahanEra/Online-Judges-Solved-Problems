#include <iostream>
#include <string>
#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll int n;
        cin >> n;

        int digit = 0;
        int num = n;

        while (num) {
            digit++;
            num = num / 10;
        }

        string str = to_string(n);
        string str1(digit, str[0]);

        int againDigit = stoi(str1);

        if (againDigit <= n || digit == 1) {
            cout << 9 * (digit - 1) + (str[0] - '0') << endl;
        } else {
            cout << 9 * (digit - 1) + (str[0] - '0') - 1 << endl;
        }
    }
    return 0;
}
