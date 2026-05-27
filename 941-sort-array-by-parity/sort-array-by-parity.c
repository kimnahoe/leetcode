/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;

    int *result=(int*)malloc(sizeof(int)*numsSize);
    int index=0;
    int i;

    for(i=0; i<numsSize; i++) {
        if(nums[i]%2==0) {
            result[index]=nums[i];
            index++;
        }
    }

    for(i=0; i<numsSize; i++) {
        if(nums[i]%2!=0) {
            result[index]=nums[i];
            index++;
        }
    }

    return result;

}