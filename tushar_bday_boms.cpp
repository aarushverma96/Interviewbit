vector<int> Solution::solve(int A, vector<int> &B) {

  int bumps[B.size()+1][A+1];
  bool person[B.size()+1][A+1];

  for (int i = 0; i <= B.size(); i++)
  {
    bumps[i][0]=0;
    person[i][0]=false;
  }

  for (int i = 0; i <= A; i++)
  {
    bumps[0][i]=0;
    person[0][i]=false;
  }

  for (int i = 1; i <= B.size(); i++)
  {
    for (int j = 1; j <= A; j++)
    {
      if(B[i-1]<=j)
      {
        int b1=bumps[i][j-B[i-1]];
        int b2=bumps[i-1][j];

        if(b1>b2)
        {
          bumps[i][j]=b1;
          person[i][j]=true;
        }
        else
        {
          bumps[i][j]=b2;
          person[i][j]=flase;
        }
      }
      else
      {
        bumps[i][j]=bumps[i-1][j];
        person[i][j]=false;
      }
    }
  }
  //

  std::vector<int> res;

  int m = B.size(), n= A;
            while(n!=0 && m!=0)
            {
                if(peron[m][n])
                {
                    res.push_back(B.size()-m);
                    n = n - B[m-1];
                }
                else
                {
                    m--;
                }
            }
  return res;



}
