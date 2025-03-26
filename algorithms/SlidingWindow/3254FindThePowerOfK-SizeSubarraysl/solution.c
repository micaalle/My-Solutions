/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* resultsArray(int* nums, int numsSize, int k, int* returnSize) {
    int * ret = malloc(sizeof(int) * (numsSize - k + 1));
    int cnt = 1; 
    int num = 0;
    *returnSize = numsSize - k + 1;
    if(k == 1) return nums;
    for(int i = 1; i < numsSize; i++){
        if(nums[i] == nums[i - 1] + 1) cnt++;
        else{
            cnt = 1;
        }
        if(cnt == k){
            ret[num] = nums[i];
            num++;
            cnt--;
        } else if(i >= k - 1){
            ret[num] = -1;
            num++;
        }
    }
    return ret; 
}   
