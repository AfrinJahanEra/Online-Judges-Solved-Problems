#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string str;
        cin >> str;
        
        int total[26] = {0};
        for (char i = 'A'; i <= 'Z'; i++) {
            int n = count(str.begin(), str.end(), i);
            if (n >= (int)(i - 'A' + 1)) {
                total[i - 'A']++;
            }
        }
        
        int sum = 0;
        for (int i = 0; i < 26; i++) {
            sum += total[i];
        }
        cout << sum << endl;
    }
    return 0;
}
