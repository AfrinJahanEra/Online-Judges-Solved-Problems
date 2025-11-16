#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, x=0, y=0;
    cin >> n;
    char s[200];
    cin >> s;
    for(int i=0; i<n; i++) {
        s[i]=='U' ? y++ : s[i]=='D' ? y-- : s[i]=='R' ? x++ : x--;
    }
    cout << n - abs(x) - abs(y);
    return 0;
}
