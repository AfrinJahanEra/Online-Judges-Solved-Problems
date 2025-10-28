#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int perimeter = 0;

        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                if (grid[r][c] == 1) {
                    perimeter += 4;

                    // Check upward neighbor
                    if (r > 0 && grid[r-1][c] == 1) perimeter -= 2;

                    // Check left neighbor
                    if (c > 0 && grid[r][c-1] == 1) perimeter -= 2;
                }
            }
        }
        return perimeter;
    }
};

int main() {
    Solution sol;

    vector<vector<int>> grid = {
        {0,1,0,0},
        {1,1,1,0},
        {0,1,0,0},
        {1,1,0,0}
    };

    cout << "Island Perimeter: " << sol.islandPerimeter(grid) << endl;

    return 0;
}
