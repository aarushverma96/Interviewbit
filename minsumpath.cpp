int Solution::minPathSum(vector<vector<int> > &A) 
{

  int dp[A.size()+1][A[0].size()+1];

  dp[0][0]=0;

  for (size_t i = 1; i <= A[0].size(); i++)
  {
    dp[0][i]=dp[0][i-1]+A[0][i];
  }

  for (size_t i = 1; i < A.size(); i++)
  {
    dp[i][0]=dp[i-1][0]+A[i][0];
  }

  for (size_t i = 1; i <= A.size(); i++)
  {
    for (size_t j = 1; j <= A[0].size(); j++)
    {
      dp[i][j] = A[i][j]+min(dp[i][j-1],dp[i-1][j]);
    }
  }

  return dp[A.size()][A[0].size()];







}
