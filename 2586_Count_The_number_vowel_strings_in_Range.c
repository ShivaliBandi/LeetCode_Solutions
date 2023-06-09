//2586. Count the Number of Vowel Strings in Range
#include<string.h>
int vowelStrings(char ** words, int wordsSize, int left, int right){
    int iresult=0;
    for(int i=left;i<=right && right<wordsSize;i++)
    {
        if((words[i][0]=='a'|| words[i][0]=='e' || words[i][0]=='i' || words[i][0]=='o'|| words[i][0]=='u')&& (words[i][strlen(words[i])-1]=='a' || words[i][strlen(words[i])-1]=='e' || words[i][strlen(words[i])-1]=='i' || words[i][strlen(words[i])-1]=='o' || words[i][strlen(words[i])-1]=='u'))
        iresult++;
    }
    return iresult;
}
