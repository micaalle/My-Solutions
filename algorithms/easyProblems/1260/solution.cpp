class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<int> tmp;

        int n = grid.size();

        int m = grid[0].size();

        int size = n * m;

        k %= size;
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                tmp.push_back(grid[i][j]);
            }
        }
        int cnt = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                int idx = (cnt - k + size) % size;
                grid[i][j] = tmp[idx];
                cnt++;
            }
        }
        return grid;
    }
};
