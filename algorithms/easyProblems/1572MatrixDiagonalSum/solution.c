int diagonalSum(int** mat, int matSize, int* matColSize) {
    int ret = 0;
    for (int i = 0; i < matSize; ++i)
    {
        ret += mat[i][i];
        
        int j = matSize - 1 - i;
        if (i != j) ret += mat[i][j];
    }
    return ret;
}
