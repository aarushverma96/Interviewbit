int Solution::singleNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

	int sum,x;
	int res=0;

	for (int i = 0; i < 32; ++i)
	{
		sum=0;
		x= (1 << i);

		for (int j = 0; j < A.size(); ++j)
		{
			if(A[j] & x)
			{
				sum++;
			}

			
		}

		if(sum%3)
			{
				res |= x;
			}
	}

	return res;

}
