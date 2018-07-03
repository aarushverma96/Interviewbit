int Solution::adjacent(vector<vector<int> > &A)
{

  int incl,excl,exclnew;

  incl=max(A[0][0],A[1][0]);
  excl=0

  for (size_t i = 0; i < A[0].size(); i++)
  {
    exclnew=max(excl,incl);
    incl=excl+max(A[0][i],A[1][0]);

    excl=exclnew;
  }

  return max(incl,excl);

}
