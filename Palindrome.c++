#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    string str1;
    int j = 0;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == ' ') {
            continue;
        } else {
            str1 = str1 + str[i];
        }
    }
    for (int i = 0; i < str1.size() ; i++) {
        if (tolower(str1[i])==tolower(str1[i+1]) || tolower(str1[i])==tolower(str1[i+2]) ) {
            cout << "Palindrome" << endl;
            return 0;
        }
    }
    cout << "Anti-palindrome" << endl;
    return 0;
}
