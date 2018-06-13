int Solution::numDecodings(string A) {

  if(A.size()==0)
  {
    return 0;
  }

  int dp[A.size()+1];
  dp[0]=1;
  dp[1]=1;

  for (int i = 2; i <=A.size(); i++)
  {
    dp[i]=0;
    if(A[i-1]>'0')
    {
      dp[i]=dp[i-1];
    }

    if(dp[i-2]=='1' || (dp[i-2]=='2' && dp[i-1]<'7'))
    {
      dp[i] += dp[i-2];
    }
  }
  return dp[A.size()];


}
