#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        
        int zeroCount = 0, oneCount = 0;
        for (char c : s) {
            if (c == '0') {
                zeroCount++;
            } else {
                oneCount++;
            }
        }

        if (min(zeroCount, oneCount) % 2 == 1) {
            cout << "DA" << endl;
        } else {
            cout << "NET" << endl;
        }
    }

    return 0;
}
