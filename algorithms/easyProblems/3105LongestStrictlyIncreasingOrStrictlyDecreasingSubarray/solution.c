int longestMonotonicSubarray(int* nums, int numsSize) {
    int ret = 1;
    int incDec = 1;
    int incInc = 1;
    for(int i = 0; i < numsSize - 1; i++){
        if(nums[i] < nums[i + 1]){
            incInc++;
        } else {
            incInc = 1;
        }
        if(nums[i] > nums[i + 1]){
            incDec++;
        } else {
            incDec = 1;
        }
        if((incInc > incDec) && incInc > ret) ret = incInc;
        else if((incInc < incDec) && incDec > ret) ret = incDec;
    }

    return ret;    
}
