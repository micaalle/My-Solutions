class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        vector<long> col(grid[0].size(), 0);
        vector<long> row(grid.size(), 0);
        
        long total = 0;
        long mid = 0;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                col[j] += grid[i][j];
                row[i] += grid[i][j];
                total += grid[i][j];
            }
        }
        long tmp = total;
        for(int i = 0; i < col.size(); i++){
            mid += col[i];
            tmp -= col[i];
            if(mid == tmp) return true;
        }
        mid = 0;
        tmp = total;
        for(int i = 0; i < row.size(); i++){
            mid += row[i];
            tmp -= row[i];
            if(mid == tmp) return true;
        }
        return false;
    }
};
