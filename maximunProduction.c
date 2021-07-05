/*
Maximum Production Problem Code: EITA

Chefland has 7 days in a week. Chef is very conscious about his work done during the week.

There are two ways he can spend his energy during the week. The first way is to do x units of work every day and the second way is to do y (>x) units of work for the first d (<7) days and to do z (<x) units of work thereafter since he will get tired of working more in the initial few days.

Find the maximum amount of work he can do during the week if he is free to choose either of the two strategies.

Input
The first line contains an integer T, the number of test cases. Then the test cases follow.
Each test case contains a single line of input, four integers d, x, y, z.
Output
For each testcase, output in a single line the answer to the problem.

Constraints
1≤T≤5⋅103
1≤d<7
1≤z<x<y≤18
Subtasks
Subtask #1 (100 points): Original constraints

Sample Input
3
1 2 3 1
6 2 3 1
1 2 8 1
Sample Output
14
19
14
Explanation
Test Case 1: Using the first strategy, Chef does 2⋅7=14 units of work and using the second strategy Chef does 3⋅1+1⋅6=9 units of work. So the maximum amount of work that Chef can do is max(14,9)=14 units by using the first strategy.

Test Case 2: Using the first strategy, Chef does 2⋅7=14 units of work and using the second strategy Chef does 3⋅6+1⋅1=19 units of work. So the maximum amount of work that Chef can do is max(14,19)=19 units by using the second strategy.
*/




#include <stdio.h>
#include<stdlib.h>
int main(void) {
    int *arr,isize=0;
    scanf("%d",&isize);
    if(isize>0)
    {
        while(isize--)
        {
            arr=(int *)malloc(4*sizeof(int));
            for(int i=0;i<4;i++)
            scanf("%d",&arr[i]);
            //  for(int i=0;i<4;i++)
            // printf("%d\t",arr[i]);
            int max1,max2;
            max1=7*arr[1];
            max2=(arr[0]*arr[2])+((7-arr[0])*arr[3]);
            if(max1>max2)
            printf("%d\n",max1);
            else
            printf("%d\n",max2);
            free(arr);
            
        }
   }
	// your code goes here
	return 0;
}

