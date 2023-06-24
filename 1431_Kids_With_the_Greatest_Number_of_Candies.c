/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize)
{
    int imax=-1;
    *returnSize=candiesSize;
    bool *ret=(bool *)malloc(sizeof(bool)*candiesSize);
    for(int icnt=0;icnt<candiesSize;icnt++)
        if(imax<candies[icnt])
            imax=candies[icnt];
    
    for(int icnt=0;icnt<candiesSize;icnt++)
    {
        if(candies[icnt]+extraCandies>=imax)
            ret[icnt]=true;
        else 
            ret[icnt]=false;

    }
    return ret;
}
