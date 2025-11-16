#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    string s;
    cin >> n >> s;

    int cnt = 0, ans = 0;

    for (int i = 0; i < n; ++i) {
      if (cnt >= 3) {
        ans = 2;
        cnt = 0;
        break;
      }
      if (s[i] == '#') {
        if (cnt != 0) {
          ans += (cnt / 2 + 1);
        }
        cnt = 0;
      } else {
        cnt++;
      }
    }

    if (cnt >= 3) {
      ans = 2;
      cnt = 0;
    }
    if (cnt != 0) {
      ans += (cnt / 2 + 1);
    }

    cout << ans << endl;
  }

  return 0;
}
