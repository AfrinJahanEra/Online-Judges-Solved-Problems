#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;

        int flag = 0;

        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] == '?') {
                flag = 1;
                if (s1.find("A") == string::npos) {
                    cout << "A" << endl;
                } 
                else if (s1.find("B") == string::npos) {
                    cout << "B" << endl;
                }
                else if (s1.find("C") == string::npos) {
                    cout << "C" << endl;
                }
                break;
            }
        }

        if (flag == 0) {
            for (int i = 0; i < s2.size(); i++) {
                if (s2[i] == '?') {
                    flag = 1;
                    if (s2.find("A") == string::npos) {
                        cout << "A" << endl;
                    }
                    else if (s2.find("B") == string::npos) {
                        cout << "B" << endl;
                    }
                    else if (s2.find("C") == string::npos) {
                        cout << "C" << endl;
                    }
                    break;
                }
            }
        }

        if (flag == 0) {
            for (int i = 0; i < s3.size(); i++) {
                if (s3[i] == '?') {
                    flag = 1;
                    if (s3.find("A") == string::npos) {
                        cout << "A" << endl;
                    }
                    else if (s3.find("B") == string::npos) {
                        cout << "B" << endl;
                    }
                    else if (s3.find("C") == string::npos) {
                        cout << "C" << endl;
                    }
                    break;
                }
            }
        }
    }

    return 0;
}
