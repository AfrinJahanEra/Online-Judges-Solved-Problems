#include <iostream>
#include <cmath>
#define ll long long
using namespace std;

int main() {
    
    ll a[100000];
    ll n, i, j, root;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a[i];
        root = sqrt(a[i]);
        if (a[i] == 1) {
            cout << "NO" << endl;
        } 
        else if ((root * root) != a[i]) {
            cout << "NO" << endl;
        } 
        else {
            int flag = 0;
            for (j = 2; j * j <= root; j++) {
                if (root % j == 0) {
                    flag++;
                }
            }
            if (flag == 0) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
