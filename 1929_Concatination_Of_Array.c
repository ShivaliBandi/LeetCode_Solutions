/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize){

    int *new_nums=malloc(sizeof(int)*2*numsSize);
    *returnSize=2*numsSize;
    for(int icnt=0;icnt<numsSize;icnt++)
    {
        new_nums[icnt]=nums[icnt];
        new_nums[icnt+numsSize]=nums[icnt];
    }
    return new_nums;
    
}
