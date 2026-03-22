class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        vector<vector<int>> tmp = mat;
        int n = mat.size();
        for(int k = 0; k < 4; k++){
            for(int i = 0; i < mat.size(); i++){
                for(int j = 0; j < mat[i].size(); j++){
                    tmp[i][j] = mat[j][n - i - 1]; 
                }
            }
            mat = tmp;
            if(mat == target) return true;
        }
        return false;
    }
};
