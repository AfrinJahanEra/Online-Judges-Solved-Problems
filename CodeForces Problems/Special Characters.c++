#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 2 != 0) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            char ch = 'A';
            int count = 0;
            while (n--) {
                if (count < 2) {
                    cout << ch;
                    count++;
                } else {
                    count = 0;
                    ch++;
                    cout << ch;
                    count++;
                }
            }
            cout << endl;
        }
    }
    return 0;
}
