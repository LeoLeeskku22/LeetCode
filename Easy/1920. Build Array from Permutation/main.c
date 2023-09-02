int* buildArray(int* nums, int numsSize, int* returnSize){
    int i;
    int s = numsSize;
    int *ans = malloc(s*sizeof(int));
    *returnSize = s;
    for(i = 0; i < s; i++){
        ans[i] = nums[nums[i]]; 
    }
    return ans;
}
