/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findThePrefixCommonArray(int* A, int ASize, int* B, int BSize, int* returnSize) {

    int * hash = calloc(BSize + 1, sizeof(int));
    int * ret = malloc(sizeof(int) * BSize);

    *returnSize = ASize;
    int cnt = 0;
    for(int i = 0; i < ASize; i++){

        if(hash[A[i]]++) cnt++;
        if(hash[B[i]]++) cnt++;

        ret[i] = cnt;
    }
    return ret;
}

