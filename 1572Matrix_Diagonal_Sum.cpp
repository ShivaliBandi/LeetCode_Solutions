/*
1572. Matrix Diagonal Sum
Given a square matrix mat, return the sum of the matrix diagonals.

Only include the sum of all the elements on the primary diagonal and all the elements on the secondary diagonal that are not part of the primary diagonal.

 

Example 1:


Input: mat = [[1,2,3],
              [4,5,6],
              [7,8,9]]
Output: 25
Explanation: Diagonals sum: 1 + 5 + 9 + 3 + 7 = 25
Notice that element mat[1][1] = 5 is counted only once.
Example 2:

Input: mat = [[1,1,1,1],
              [1,1,1,1],
              [1,1,1,1],
              [1,1,1,1]]
Output: 8
Example 3:

Input: mat = [[5]]
Output: 5
 

Constraints:

n == mat.length == mat[i].length
1 <= n <= 100
1 <= mat[i][j] <= 100


OPtimized solution:

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
       //diagonal elements : i == j  and i + j = n - 1
    int n = mat.size();
    int sum = 0;
    for(int i = 0; i < n; i++)
      sum += mat[i][i] + mat[i][n - i - 1];
    
    if(n % 2 != 0)
      return sum - mat[n/2][n/2];   //middle element got added twice if n is odd
    return sum;
    }
};


*/



class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int isum=0,n=0,m=mat.size()-1;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[i].size();j++)
            {
                if(i==j)
                    isum+=mat[i][j];
                if(i==n && j==m && n!=m)
                    isum+=mat[i][j];
               
                
            }
                if((n==mat.size()-1) && (m==0))
                {
                    m=mat.size()-1;
                    n=0;
                }
                n++;
                m--;
        }
        
            
        return isum;
    }
};
