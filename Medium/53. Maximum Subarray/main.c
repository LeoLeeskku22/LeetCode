int maxSubArray(int* nums, int numsSize){
    int local_max = nums[0];
    int global_max = nums[0];
    int i;
    for(i = 1; i < numsSize; i++){
        if(nums[i] > local_max + nums[i]){
            local_max = nums[i];
        } else{
            local_max += nums[i];
        }

        if(local_max > global_max){
            global_max = local_max;
        }
    }

    return global_max;
}
