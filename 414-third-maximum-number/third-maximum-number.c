void insertion_sort(int *arr, int n)
{
	int i,j,k,temp;
	for(i=1; i<n; i++) {
		for(j=0; j<i; j++)
			if( arr[j] < arr[i] ) break;
		temp = arr[i];
		for(k=i; k>j; k--)
			arr[k] = arr[k-1];
		arr[j] = temp;
    }
}
int depup(int* nums, int numsSize)
{
    int arr[100000], index=0;
    int i, j, flag;

    for (i = 0; i < numsSize; i++) {
        flag = 0;
        for (j = 0; j < i; j++) {
            if (nums[i] == nums[j]) {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            arr[index++] = nums[i];
    }

    insertion_sort(arr, index);

    if(index<3)
        return arr[0]; //내림차순으로 정렬했기 때문
    else
        return arr[2];
}
int thirdMax(int* nums, int numsSize) {
    return depup(nums, numsSize);
}