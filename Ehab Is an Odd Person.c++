#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];

    bool even = false, odd = false;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0){
            even = true ;
        }
        else{
            odd = true ;
        }
    }

    if (!even || !odd) {
        for (int i = 0; i < n; i++){
            cout << a[i] << " ";
        }
    }
    else {
        sort(a, a + n);
        for (int i = 0; i < n; i++){
            cout << a[i] << " ";
        }
    }
    cout << endl;
    return 0;
}
