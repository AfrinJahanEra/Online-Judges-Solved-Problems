#include <iostream>
#include <string>
#define ll long long 
using namespace std;

int main() {
    int row, col;
    cin >> row >> col;
    char str[row][col];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> str[i][j];
        }
    }

    int count1[row] = {0};
    int count2[col] = {0};

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (str[i][j] == '.') {
                count1[i]++;
            }
        }

        if (count1[i] == col) {
            for (int j = 0; j < col; j++) {
                str[i][j] = '0';  
            }
        } 
        else {
            count1[i] = 0;
        }
    }

    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            if (str[j][i] != 'S') {
                if (str[j][i] == '.') {
                    count2[i]++;
                }
            }
            else {
                    count2[i] = 0;
                    break;
                }
        }
    }

    int count11 = 0, count22 = 0;

    for (int i = 0; i < row; i++) {
        count11 += count1[i];
    }
    
    for (int i = 0; i < col; i++) {
        count22 += count2[i];
    }
    
    cout << count11 + count22 << endl;

    return 0;
}
