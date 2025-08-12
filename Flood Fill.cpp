#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void dfs(vector<vector<int>>& image, int sr, int sc, int originalColor, int newColor) {
        // Boundary and condition check
        if (sr < 0 || sr >= image.size() || sc < 0 || sc >= image[0].size())
            return;
        if (image[sr][sc] != originalColor || image[sr][sc] == newColor)
            return;

        // Change the color
        image[sr][sc] = newColor;

        // Move in all 4 directions
        dfs(image, sr + 1, sc, originalColor, newColor);
        dfs(image, sr - 1, sc, originalColor, newColor);
        dfs(image, sr, sc + 1, originalColor, newColor);
        dfs(image, sr, sc - 1, originalColor, newColor);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int originalColor = image[sr][sc];
        if (originalColor != color)
            dfs(image, sr, sc, originalColor, color);
        return image;
    }
};

int main() {
    Solution sol;

    vector<vector<int>> image = {{1,1,1},{1,1,0},{1,0,1}};
    int sr = 1, sc = 1, color = 2;

    vector<vector<int>> result = sol.floodFill(image, sr, sc, color);

    cout << "Modified Image:" << endl;
    for (auto &row : result) {
        for (auto &pixel : row) {
            cout << pixel << " ";
        }
        cout << endl;
    }

    return 0;
}
