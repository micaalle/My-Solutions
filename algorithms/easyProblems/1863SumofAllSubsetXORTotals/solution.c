int subsetXORSum(int* nums, int numsSize) {
    int ret = 0;
    for(int i = 1; i < 1 << numsSize; ++i){
        int val = 0;
        for(int j = 0; j < numsSize; ++j){
            if(i & (1 << j)) val ^= nums[j];
        }
        ret += val;
    }
    return ret;
}
