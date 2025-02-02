bool check(int* nums, int numsSize) {
    int i=1;
    int count = 0;
    while(i < numsSize) {
        if(nums[i] < nums[i-1]) {
            count++;
        } 
        i++;
    }
    return (count == 0 || (count == 1 && nums[0] >= nums[numsSize-1]));
}
