#include <iostream>
using namespace std;

int main() {
    int a[100];
    int b, c, n, m;
    char s[50];
    
    cin >> n;

    int flag = 0;
    for (int i = 0; i < n; i++) {
        cin >> s >> b >> c;
        if (b >= 2400 && c > b) {
            flag = 1;
        }
    }

    if (flag == 1) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
