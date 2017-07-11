int Solution::isPrime(int A) {
	// Do not write main() function.
	// Do not read input, instead use the arguments to the function.
	// Do not print the output, instead return values as specified
	// Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
	
	
	int i;

	if(A==1)
	{
		return 0;
	}

	if(A==0)
	{
		return 0;
	}

	for(i=2;i<=sqrt(A);i++)
	{
		if(A%i==0)
		{
			return 0;
		}
		

	}

	return 1;


}
