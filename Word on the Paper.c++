#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        char str[8][8];
        string newStr;
        for(int j = 0; j < 8; j++) {
            for(int k = 0; k < 8; k++) {
                cin >> str[j][k];
                if(str[j][k] != '.') {
                    newStr += str[j][k];
                }
            }
        }
        cout << newStr << endl;
    }
    return 0;
}
