int singleNumber(int* nums, int numsSize){
    int unique = 0,i;
    for(i = 0; i < numsSize; i++){
        unique ^= nums[i];
    }
    return unique;
}
