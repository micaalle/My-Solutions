bool isArraySpecial(int* nums, int numsSize) {
    for(int i = 0; i < numsSize - 1; i++){
        if(nums[i] % 2 == 0 && nums[i + 1] % 2 == 0) return false;
        else if(nums[i] % 2 != 0 && nums[i + 1] % 2 != 0) return false;
    }
    return true;
}
