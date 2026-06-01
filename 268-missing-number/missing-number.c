int missingNumber(int* nums, int numsSize) {
    int i, j;
    int sum=0, total=0;
    for(i=0; i<numsSize; i++){
        sum += nums[i];
        total += i;
    }
    total+=i;
    return total-sum;
}