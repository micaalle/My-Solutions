bool canPartition(int* nums, int numsSize) {
    int val = 0;
    for(int i = 0; i < numsSize; i++){
        val += nums[i];
    }
    
    if(val % 2 != 0) return false;
    val = val/2;


    bool * dp = malloc(sizeof(bool) * (val + 1));
    memset(dp,false,sizeof(bool) * (val + 1));
    dp[0] = true;

    for(int i = 0; i < numsSize; i++) {
        for(int j = val; j >= nums[i]; j--) {
            dp[j] = dp[j] || dp[j - nums[i]];
        }
    }
    return dp[val];
}
