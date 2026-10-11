int pivotIndex(int* nums, int numsSize) {
    int i=0;
    int sum=0;
    for(i=0; i<numsSize; i++) {
        int left, right;
        left=right=0;
        for(int j=0; j<i; j++)
            left += nums[j];
        for(int j=i+1; j<numsSize; j++)
            right += nums[j];
        if(left == right)
            return i;
    }
    return -1;
}