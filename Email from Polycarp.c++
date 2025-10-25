#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str1, str2;
        cin >> str1 >> str2;
        int i = 0, j = 0;
        bool flag = true;
        while (i < str1.size() && j < str2.size()) {
            char c1 = str1[i], c2 = str2[j];
            if (c1 != c2) {
                flag = false;
                break;
            }
            int count1 = 1, count2 = 1;
            while (i + 1 < str1.size() && str1[i] == str1[i + 1]) {
                i++;
                count1++;
            }
            while (j + 1 < str2.size() && str2[j] == str2[j + 1]) {
                j++;
                count2++;
            }
            if (count1 > count2) {
                flag = false;
                break;
            }
            i++;
            j++;
        }
        if (i != str1.size() || j != str2.size()) {
            flag = false;
        }
        cout << (flag ? "YES" : "NO") << endl;
    }
    return 0;
}
