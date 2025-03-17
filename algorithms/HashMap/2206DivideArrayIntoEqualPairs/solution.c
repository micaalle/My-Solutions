bool divideArray(int* nums, int numsSize) {
    int ret = 0;
    int * hash = calloc(sizeof(int), 501);
    for(int i = 0; i < numsSize; i++){
        hash[nums[i]]++;
        if(hash[nums[i]] % 2 == 0) ret++;
    }
    printf("%d",ret);
    return (ret >= (numsSize/2));

}
