
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string str[n];

        for (int i = 0; i < n; i++) {
            cin >> str[i];
        }

        int flag = 0,count=0;
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - 1; j++) {
                if (count==0 && str[i][j] == '1' && str[i][j+1] == '0'){
                    count=1;
                    if((str[i + 1][j - 1] == '1' && str[i + 1][j + 1] == '1')) {
                    cout << "TRIANGLE" << endl;
                    flag = 1;
                    break;
                    }
                }
                else if(count==0 &&(str[i][j]=='1'&&str[i][j+1]=='1')){
                    count=1;
                    if(str[i+1][j]=='0'){
                        cout << "TRIANGLE" << endl;
                        flag=1;
                        break;
                    }
                }
            }
            if (flag){
                break;
            }
        }
        if(!flag){
            cout<<"SQUARE"<<endl;
        }
    }
    return 0;
}