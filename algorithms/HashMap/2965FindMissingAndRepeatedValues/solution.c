/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findMissingAndRepeatedValues(int** grid, int gridSize, int* gridColSize, int* returnSize) {
    int * hash = calloc(sizeof(int), gridSize * gridSize + 1);
    int * ret = malloc(sizeof(int) * 2);

    *returnSize = 2;

    for(int i = 0; i < gridSize; i++){
        for(int j = 0; j < gridSize; j++){
            hash[grid[i][j]]++;
            if (hash[grid[i][j]] == 2){
                ret[0] = grid[i][j];
            }
        }
    }
    for(int i = 1; i < gridSize * gridSize + 1; i++){
        if(hash[i] == 0){
            ret[1] = i;
            return ret;
        }
    }
    return ret;
}
