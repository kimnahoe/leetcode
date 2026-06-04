int removeDuplicates(int* nums, int numsSize)
{
    int i=0;
    int length=1;

    while(i < numsSize-1) {
        if(nums[i] != nums[i+1]) { //같지 않다면
            nums[length]=nums[i+1];
            length++;
        }
        i++;
    }
    return length;
}