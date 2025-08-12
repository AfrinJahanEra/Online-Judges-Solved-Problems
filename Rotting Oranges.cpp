#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();

        queue<pair<int,int>> q; // store {row, col} of rotten oranges
        int freshCount = 0;

        // Step 1: Find initial rotten oranges and count fresh oranges
        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                if (grid[r][c] == 2) {
                    q.push({r, c});
                } else if (grid[r][c] == 1) {
                    freshCount++;
                }
            }
        }

        // If no fresh oranges at start
        if (freshCount == 0) return 0;

        int minutes = -1; // starts from -1 because the first loop adds 1

        // Directions for 4-neighbors
        vector<pair<int,int>> directions = {{1,0},{-1,0},{0,1},{0,-1}};

        // Step 2: BFS
        while (!q.empty()) {
            int size = q.size();
            minutes++;

            for (int i = 0; i < size; i++) {
                auto [r, c] = q.front();
                q.pop();

                for (auto [dr, dc] : directions) {
                    int nr = r + dr;
                    int nc = c + dc;

                    if (nr >= 0 && nr < rows && nc >= 0 && nc < cols && grid[nr][nc] == 1) {
                        grid[nr][nc] = 2; // rot the orange
                        freshCount--;
                        q.push({nr, nc});
                    }
                }
            }
        }

        // Step 3: Check if fresh oranges remain
        return (freshCount == 0) ? minutes : -1;
    }
};

int main() {
    Solution sol;

    vector<vector<int>> grid = {
        {2,1,1},
        {1,1,0},
        {0,1,1}
    };

    cout << "Minutes until all oranges rot: " << sol.orangesRotting(grid) << endl;

    return 0;
}
