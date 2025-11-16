#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string str;
        cin >> str;

        int count = 0;
        int flag = 0;
        int i=0,j=1;
        for (char ch1 = 'a'; ch1 <= 'z'; ch1++) {
            for (char ch2 = 'a'; ch2 <= 'z'; ch2++) {
                if (str[0] == ch1 && str[1] == ch2) {
                    count = count + j; 
                    cout << count << endl;
                    flag = 1;
                    break;
                } 
                else if (str[0] == ch1 && str[1] != ch2) {
                    if(ch1!=ch2){
                        j++;
                        continue;
                    }
                    else{
                        continue;
                    }
                } 
                else {
                    break;
                }
            }
            
            if (flag) {
                break;
            }
            else{
                i++;
                count = i * 25;
                continue;
            }
        }
    }

    return 0;
}
