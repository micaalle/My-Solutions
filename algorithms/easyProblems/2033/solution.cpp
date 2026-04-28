class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> ret;
        int rets = 0;
        int rem = grid[0][0] % x;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[i].size(); j++){
                if(grid[i][j] % x != rem) return -1;
                ret.push_back(grid[i][j]);
            }
        }

        int n = ret.size();

        nth_element(ret.begin(), ret. begin() + n/2, ret.end());

        int com = ret[n / 2];

        for(int i = 0; i < n; i++){
            rets += abs(com - ret[i]) / x;
        }
        return rets;
    }
};
