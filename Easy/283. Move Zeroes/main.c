void moveZeroes(int* nums, int numsSize){
    int lastNonZeroFoundAt = 0,i;
  
    for (i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[lastNonZeroFoundAt++] = nums[i];
        }
    }

    for (i = lastNonZeroFoundAt; i < numsSize; i++) {
        nums[i] = 0;
    }
}
