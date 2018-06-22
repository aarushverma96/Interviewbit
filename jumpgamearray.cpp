int Solution::canJump(vector<int> &A) {

  if(A.size()==0 || A.size()==1)
  {
    return 1;
  }

  int res[A.size()];
  memset(res,0,A.size() * sizeof(int));

  int inRange=A.size()-1

  for (int i = A.size()-2; i>=0; i--)
  {
    if(A[i]-inRange+i>=0)
    {
      inRange=i;
      res[i]=1;
    }
  }

  return res[0];

}
