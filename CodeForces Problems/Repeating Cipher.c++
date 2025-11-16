#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    int i = 0;
    int j = 1; 
    while (i < str.length()) { 
        cout << str[i];
        i = i + j;
        j++;
    }

    return 0;
}
