int Solution::maxProfit(const vector<int> &A) {

  int price=INT_MAX,profit=INT_MIN;

  for (int i = 0; i < A.size(); i++)
  {
    if(A[i]<price)
    {
      price=A[i];
    }
    else if(A[i]-price > profit)
    {
      profit=A[i]-price;
    }
  }


  return profit;



}
