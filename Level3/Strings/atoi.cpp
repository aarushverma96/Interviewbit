int Solution::atoi(const string &A) {
	// Do not write main() function.
	// Do not read input, instead use the arguments to the function.
	// Do not print the output, instead return values as specified
	// Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details


	if(! isspace(A[0])  &&  ! isdigit(A[0]))
	{
		return 0;
	}

	int start,end;

	int i;
	

	for (i = 0; i < A.length(); ++i)
	{
		if(isdigit(A[i]))
		{
			break;
		}
	}

	start=i;

	

	for(end=start;end<A.length();end++)
	{
		if(!isdigit(A[end]))
		{
			break;
		}
	}
	end--;

	

return end;
}
