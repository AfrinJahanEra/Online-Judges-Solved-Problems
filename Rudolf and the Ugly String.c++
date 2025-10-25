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
        int count = 0;
        for (int i = 0; i < str.size() - 2 + 1 ; i++) {
            if ((str[i] == 'm' && str[i + 1] == 'a' && str[i + 2] == 'p') || (str[i] == 'p' && str[i + 1] == 'i' && str[i + 2] == 'e')) {
                count++;
                i += 2;
            }
        }
        cout << count << endl;
    }
    return 0;
}
