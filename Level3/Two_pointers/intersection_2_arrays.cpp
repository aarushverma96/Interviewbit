  vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

  	int i=0,j=0;

  	std::vector<int> ans;

  	while(i<A.length() && j<B.length())
  	{
  		if(A[i]!=B[j])
  		{
  			if(A[i]<B[j])
  			{
  				i++;
  			}
  			else
  			{
  				j++;
  			}
  		}
  		else
  		{
  			ans.push_back(A[i]);
  			i++;
  			j++;
  		}
  	}

  	return ans;

}
