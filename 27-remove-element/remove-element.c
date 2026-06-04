int removeElement(int* nums, int numsSize, int val)
{
    int i = 0;
    int index=0;

    while(i < numsSize) {
        if(nums[i] != val) { //같지 않으면
            nums[index]=nums[i];
            index++;
        }
        i++;
    }
    return index;
}