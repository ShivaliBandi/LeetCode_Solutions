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