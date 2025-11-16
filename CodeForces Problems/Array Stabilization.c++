#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    const int MAX_SIZE = 100500;
    int a[MAX_SIZE], n, i;
    
    cin >> n;
    
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a, a + n);
    
    int diff = min(a[n - 1] - a[1], a[n - 2] - a[0]);
    
    cout << diff;
    
    return 0;
}
