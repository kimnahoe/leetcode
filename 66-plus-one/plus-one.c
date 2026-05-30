/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {

    int *result=(int*)malloc(sizeof(int)*(digitsSize+1));

    int i, j;
    int index=0;
    int sum=0;
    int carry=1;

    for(i=0; i<digitsSize; i++)
        result[i]=digits[i];

    for(i = digitsSize - 1; i >= 0; i--) {
        result[i] += carry;
        carry = result[i] / 10;
        result[i] %= 10;
    }
    
     if(carry) {
        for(i = digitsSize - 1; i >= 0; i--) {
            result[i + 1] = result[i];
        }
        result[0] = 1;
        *returnSize = digitsSize + 1;
    } else {
        *returnSize = digitsSize;
    }
    
    return result;
}