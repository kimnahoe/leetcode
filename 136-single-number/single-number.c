int singleNumber(int* nums, int numsSize) {
    int i, j;
    for(i=0; i<numsSize; i++){
        for(j=0; j<numsSize; j++) {
            if(i != j && nums[i] == nums[j]) //같으면 바로 뒤
                break;
        }
        if(j==numsSize)
            return nums[i];

    }
    return 0;
}