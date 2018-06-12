int Solution::solve(vector<vector<int> > &A) {

  int C=A[0].size();
  int R=A.size();

  int hist[R][C];

  for (int i = 0; i < C; i++) //base case
  {
    hist[0][i]=A[0][i];
  }

  for (int i = 1; i < C; i++)
  {
    for (int j = 0; j < R; j++)
    {
      if(A[j][i]==0)
      {
        hist[j][i]=0;
      }
      else
      {
        hist[j][i]=hist[j-1][i]+1;
      //  hist[j][i]=hist[j][i]*(i+1);
      }
    }
  }

  for (int i = 0; i < R; i++)
  {
    for (int j = 0; j < C; j++)
    {
      hist[i][j]=hist[i][j]*(j+1);
    }
  }

  for (int i = 0; i < R; i++)
  {
    sort(h[i],h[i]+C,std::greater<int>());
  }



  int res=INT_MIN;

  for (int i = 0; i < R; i++)
  {
    for (int j = 0; j < C; j++)
    {
      res=max(res,hist[i][j]);
    }
  }

  return res;


}
