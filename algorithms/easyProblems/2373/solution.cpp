class Solution {
public:
    int largest(vector<vector<int>>& grid, int r, int c) {
        int val = 0;
        for (int i = r; i < r + 3; i++) {
            for (int j = c; j < c + 3; j++) {
                val = max(val, grid[i][j]);
            }
        }

        return val;
    }
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {

        int n = grid.size();
        vector<vector<int>> ret(n - 2, vector<int>(n - 2));

        for (int i = 0; i < n - 2; i++) {
            for (int j = 0; j < n - 2; j++) {

                ret[i][j] = largest(grid, i, j);
            }
        }
        return ret;
    }
};
