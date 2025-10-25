#include<iostream>
#define ll long long
using namespace std;

int main() {
    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    int result = 0, r = 0;
    for (int i = 0; i * a <= n; ++i) {
        for (int j = 0; i * a + j * b <= n; ++j) {
            r = (n - (i * a) - (j * b));
            if (r % c == 0) {
                int k = r / c;
                result = max(result, i + j + k);
            }
        }
    }
    cout << result << endl;
    return 0;
}
