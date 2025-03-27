int minimumIndex(int* nums, int numsSize) {
    
    int * hash = calloc(sizeof(int), 1000000001);
    int max = -1;
    int tmp = 0;
    for(int i = 0; i < numsSize; i++){
        hash[nums[i]]++;
        
        if(hash[nums[i]] > tmp){
            tmp = hash[nums[i]];
            max = nums[i];
        }
    } 


    int left = 0, right = tmp; 
    for (int i = 0; i < numsSize - 1; i++) { 
        if (nums[i] == max) {
            left++;
            right--;
        }

        if (left > (i + 1) / 2 && right > (numsSize - i - 1) / 2) {
            return i;
        }
    }

    return -1;
}
