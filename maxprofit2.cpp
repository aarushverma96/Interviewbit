int Solution::maxProfit(const vector<int> &A) {

  int total=0;

  for (size_t i = 0; i < A.size(); i++)
  {
    if(A[i+1]>A[i])
    {
      total += A[i+1]-A[i];
    }
  }

  return total;

}
