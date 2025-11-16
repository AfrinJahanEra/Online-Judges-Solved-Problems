#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool flag = true;
        for (int j = 0; j < n - 1; j++) {
            if ((s[j] == 'M' || s[j] == 'm') && (s[j + 1] == 'm' || s[j + 1] == 'M')) {
                continue;
            } 
            else if ((s[j] == 'M' || s[j] == 'm') && (s[j + 1] == 'e' || s[j + 1] == 'E')) {
                continue;
            } 
            else if ((s[j] == 'E' || s[j] == 'e') && (s[j + 1] == 'e' || s[j + 1] == 'E')) {
                continue;
            } 
            else if ((s[j] == 'E' || s[j] == 'e') && (s[j + 1] == 'o' || s[j + 1] == 'O')) {
                continue;
            } 
            else if ((s[j] == 'o' || s[j] == 'O') && (s[j + 1] == 'O' || s[j + 1] == 'o')) {
                continue;
            }
            else if ((s[j] == 'O' || s[j] == 'o') && (s[j + 1] == 'w' || s[j + 1] == 'W')) {
                continue;
            } 
            else if ((s[j] == 'W' || s[j] == 'w') && (s[j + 1] == 'w' || s[j + 1] == 'W')) {
                continue;
            }
            else {
                flag = false;
                break;
            }
        }
       
        if((s[0]!='M' && s[0]!='m')||(s[n-1]!='w'&&s[n-1]!='W')){
            flag = false;
        }
        
        if (flag) {
            cout << "YES" << endl;
        } 
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
