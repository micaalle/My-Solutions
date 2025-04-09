int minOperations(int* nums, int numsSize, int k) {
    int * hash = calloc(sizeof(int), 101);
    int ret = 0;

    for(int i = 0; i < numsSize; i++){
        if(nums[i] < k) return -1;
        hash[nums[i]]++;
        if((hash[nums[i]] == 1) && (nums[i]!= k)) ret++;
    }  
    return ret;
}
