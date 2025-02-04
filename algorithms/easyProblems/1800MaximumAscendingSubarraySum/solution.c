int maxAscendingSum(int* nums, int numsSize) {
    int ret = 0;
    int tmp = 0;
    int prev = 0;
    for(int i = 0; i < numsSize; i++){
        if(nums[i] > prev) tmp += nums[i];
        else{
            tmp = nums[i];
        }
        if(tmp > ret) ret = tmp;
        prev = nums[i];
    }
    return ret;
}
