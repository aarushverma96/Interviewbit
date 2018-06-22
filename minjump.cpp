int Solution::jump(vector<int> &A) {

  int res[A.size()];

  for (int i = 0; i < A.size(); i++) {
    res[i]=INT_MAX;
  }

  res[0]=0;

  for (int i = 1; i < A.size(); i++)
  {
    for (int j = 0; j < i; j++)
    {
      if(i<=A[j]+j)
      {
        res[i]=min(res[i],1+res[i-1]);
      }

    }
  }

  return res[A.siez()-1];

}
