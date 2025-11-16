#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int n, m;
    
    cin >> str;
    n = str.size();
    
    if (n >= 2) {
        m = (str[n - 1] - '0') + (str[n - 2] - '0') * 10;
    }
    else {
        m = str[n - 1] - '0';
    }
    
    if (m % 4) {
        cout << '0';
    }
    else {
        cout << '4';
    }

    return 0;
}
