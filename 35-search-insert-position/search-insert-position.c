int searchInsert(int* nums, int numsSize, int target) {
    int i=0;
    if(target < nums[0])
        return 0;
    while(i < numsSize) {
        if(nums[i] == target)
            return i;
        else if(nums[i] < target && i+1 < numsSize && target < nums[i+1]) //i+1 범위 체크
            return i+1;
        i++;
    }
    
    return numsSize;
}