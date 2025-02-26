int maxAbsoluteSum(int* nums, int numsSize) {
    int ret = nums[0];
    int maxEnd = nums[0];
    int minEnd = nums[0];

    for(int i = 1; i < numsSize; i++){  
        maxEnd = (maxEnd + nums[i] > nums[i]) ? maxEnd + nums[i] : nums[i];
        minEnd = (minEnd + nums[i] < nums[i]) ? minEnd + nums[i] : nums[i];
        

        ret = (ret > maxEnd) ? ret : maxEnd;
        ret = (ret > -minEnd) ? ret : -minEnd;  
    }
    return abs(ret);
}
