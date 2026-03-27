class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int n = mat[0].size();
        k %= n;
        
        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < n; j++) {
                if (i % 2 == 0) {
                    if(mat[i][(j + k) % n] != mat[i][j]) return false;
                } else {
                    if(mat[i][(j - k + n) % n] != mat[i][j]) return false;

                }
                
            }
        }
        return true;
    }
};
