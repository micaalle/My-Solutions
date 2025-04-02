long long maximumTripletValue(int* nums, int numsSize) {
    long long ret = 0;
    
    for(int i = 0; i < numsSize; i++){
        for(int j = i + 1; j < numsSize; j++){
            for(int k = j + 1; k < numsSize; k++){
                long long sub = (nums[i] - nums[j]);
                long long mul = sub * nums[k];

                if(mul > ret) ret = mul;
            }
        }
    }
    return ret;
}
