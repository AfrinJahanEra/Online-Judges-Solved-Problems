#include <bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 1000000;
int arr[MAX_SIZE];

int main() {
    int n, x, y;
    cin >> n >> x >> y;

    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
    }

    for (int i = 1; i <= n; ++i) {
        bool flag = true;
        
        for (int j = i - 1, cnt = x; j > 0 && cnt > 0; --j, --cnt) {
            if (arr[j] <= arr[i]) {
                flag = false;
                break;
            }
        }
        
        if (flag) {
            for (int j = i + 1, cnt = y; j <= n && cnt > 0; ++j, --cnt) {
                if (arr[j] <= arr[i]) {
                    flag = false;
                    break;
                }
            }
        }

        if (flag) {
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}
