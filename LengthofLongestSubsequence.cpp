int Solution::longestSubsequenceLength(const vector<int> &A) {

  if(A.size()==0)
  {
    return 0;
  }

  int inc[A.size()];
  int dec[A.size()];

  // memset(inc,1,sizeof(inc));
  // memset(dec,1,sizeof(dec));

  for (int i = 0; i < A.size(); i++)
  {
    inc[i]=1;
    dec[i]=1;
  }


  for (int i = 1; i < A.size(); i++)
  {
    for (int j = 0; j < i; j++)
    {
      if(A[i]>A[j] && inc[i]< inc[j]+1)
      {
        inc[i]=inc[j]+1;
      }
    }
  }

  for (int i = A.size()-2; i >=0 ; i--)
  {
    for (int j = A.size()-1; j >=0 ; j--)
    {
      if(A[i]>A[j] && dec[i]< dec[j]+1)
      {
        dec[i]=dec[j]+1;
      }
    }
  }


   // for (int i = 0; i < A.size(); i++)
   // {
   //   cout << inc[i] << " ";
   // }

  int res=inc[0]+dec[0]-1;

  for (int i = 1; i < A.size(); i++)
  {
    if(inc[i]+dec[i]-1>res)
    {
      res=inc[i]+dec[i]-1;
    }

  }



  return res;


}
