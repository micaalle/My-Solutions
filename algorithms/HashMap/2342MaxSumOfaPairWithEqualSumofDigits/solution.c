int sum(int val) {
    if (val == 0) return 0; 
    return val % 10 + sum(val / 10); 
}

 
int maximumSum(int* nums, int numsSize) {
    int max = -1;

    int * sumHash = malloc(sizeof(int) * 83);
    memset(sumHash, -1, 83);
 
    for (int i = 0; i < numsSize; i++) {
        int digitSum = sum(nums[i]);
        
        if (sumHash[digitSum] != -1) {
            max = (nums[i] + sumHash[digitSum] > max) ? nums[i] + sumHash[digitSum] : max;
        }
        
        sumHash[digitSum] = (sumHash[digitSum] > nums[i]) ? sumHash[digitSum] : nums[i];
    }

    return max;
}
