/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* pivotArray(int* nums, int numsSize, int pivot, int* returnSize) {

    int * ret = malloc(sizeof(int) * numsSize);
    int idx = 0;
    *returnSize = numsSize;
    for(int i = 0; i < numsSize; i++){
        if(nums[i] < pivot) ret[idx++] = nums[i];
    }
    for(int i = 0; i < numsSize; i++){
        if(nums[i] == pivot) ret[idx++] = nums[i];
    }
    for(int i = 0; i < numsSize; i++){
        if(nums[i] > pivot) ret[idx++] = nums[i];
    }
    return ret;
}
