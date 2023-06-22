/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
int *ret=(int*)malloc(sizeof(int)*2*n);
int j=0;
*returnSize=numsSize;
for(int i=0;i<n;i++)
{
  ret[j++]=nums[i];
  ret[j++]=nums[n+i];
}

return ret;
}
