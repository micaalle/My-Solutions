class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ret = 0;
        int matSize = mat.size();
        for (int i = 0; i < matSize; i++) {
            ret += mat[i][i];
            ret += mat[i][matSize - 1 - i];
        }

        if (matSize % 2 == 1) {
            ret -= mat[matSize / 2][matSize / 2];
        }

        return ret;
    }
};
