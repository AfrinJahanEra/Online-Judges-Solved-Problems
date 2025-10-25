#include <iostream>
using namespace std;

int main() {
    int rows, cols, i, j, posX = -1, posY = -1;
    cin >> rows >> cols;
    char grid[501][501];

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            cin >> grid[i][j];
        }
    }

    if (rows <= 2 || cols <= 2) {
        cout << "NO\n";
    } else {
        for (i = 1; i < rows - 1; i++) {
            for (j = 1; j < cols - 1; j++) {
                if ((grid[i][j] == '*') && (grid[i + 1][j] == '*') && (grid[i - 1][j] == '*') && (grid[i][j + 1] == '*') && (grid[i][j - 1] == '*')) {
                    posX = i;
                    posY = j;
                }
            }
        }

        if (posX == -1 || posY == -1) {
            cout << "NO\n";
            return 0;
        }

        for (i = posX + 1; i < rows && grid[i][posY] != '.'; i++) {
            grid[i][posY] = '.';
        }

        for (i = posX - 1; i >= 0 && grid[i][posY] != '.'; i--) {
            grid[i][posY] = '.';
        }

        for (j = posY + 1; j < cols && grid[posX][j] != '.'; j++) {
            grid[posX][j] = '.';
        }

        for (j = posY - 1; j >= 0 && grid[posX][j] != '.'; j--) {
            grid[posX][j] = '.';
        }

        grid[posX][posY] = '.';
        bool flag = true;

        for (i = 0; i < rows; i++) {
            for (j = 0; j < cols; j++) {
                if (grid[i][j] == '*') {
                    flag = false;
                }
            }
        }

        if (flag) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
