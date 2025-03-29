/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    int * ret = malloc(sizeof(int) * (matrixSize * (*matrixColSize)));
    *returnSize = (matrixSize * (*matrixColSize));
    int top = 0, bottom = matrixSize - 1;
    int left = 0, right = *matrixColSize - 1;
    int iter = 0;

    for(int mov = 0; mov < matrixSize; mov++){  
        
        if(iter == (matrixSize * (*matrixColSize))) break;
        for (int j = left; j <= right; j++) {
            ret[iter++] = matrix[top][j];
        }
        top++;  

        for (int i = top; i <= bottom; i++) {
            ret[iter++] = matrix[i][right];
        }
        right--;  

        if (top <= bottom) {

            for (int j = right; j >= left; j--) {
                ret[iter++] = matrix[bottom][j];
            }
            bottom--;  
        }

        if (left <= right) {

            for (int i = bottom; i >= top; i--) {
                ret[iter++] = matrix[i][left];
            }
            left++;  
        }
    }
    return ret;
}
