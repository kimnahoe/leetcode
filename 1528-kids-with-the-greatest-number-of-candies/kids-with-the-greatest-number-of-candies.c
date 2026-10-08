/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    bool* arr;
    arr = (bool*)malloc(sizeof(bool) * candiesSize);

    int i;
    int max=candies[0];
    for(i=0; i<candiesSize; i++){ //최대 찾기
        if(candies[i]>max)
            max=candies[i];
    }
    for(i=0; i<candiesSize; i++) {
        if(candies[i]+extraCandies>=max)
            arr[i]=true;
        else
            arr[i]=false;
    }

    *returnSize=candiesSize;

    return arr;
}