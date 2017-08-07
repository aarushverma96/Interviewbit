int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details


	int i,j,k;

	i=j=k=0;


	int ans=INT_MAX;

	while(i<A.size() && j<B.size() && k<C.size())
	{
		
		int min1=min(A[i],min(B[j],C[k]));
		int max1=max(A[i],max(B[j],C[k]));

		int diff =max1-min1;


		if(diff<ans)
		{
			ans= diff;
		}


		if(min1==A[i])
		{
			i++;
		}
		else if(min1==B[j])
		{
			j++;
		}
		else
		{
			k++;
		}


	}

	 return ans;	

		


	



}
