int Solution::isNumber(const string &A) {
	// Do not write main() function.
	// Do not read input, instead use the arguments to the function.
	// Do not print the output, instead return values as specified
	// Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

	if(A.length()==0)
	{
		return 0;
	}

	while(isspace(A[k]))
	{
		k++;
	}

	

	if(! isdigit(A[k]) &&  ! A[k]=='+' &&  ! A[k]=='-'  && ! A[k]=='.')
	{
		return 0;
	}

	int end=A.length()-1;

	while(isspace(A[end]))
	{
		end--;
	}

	if(! isdigit(A[end]))
	{
		return 0;
	}

	int inde;

	for (int j = k+1; j <= end; ++j)
	{

		if(! isdigit(A[j]) &&  A[j]!='e'  && A[j]!='.')
		{
			return 0;
		}
		if(A[j]=='e')
		{
			inde=j;
			break;
		}
	}

	if(! isdigit(A[inde+1]) &&  ! A[inde+1]=='+' &&  ! A[inde+1]=='-')
	{
		return 0;
	}

	for (int j = inde+2; j <=end; ++j)
	{
		if(! isdigit(A[j]))
		{
			return 0;
		}
	}

	return 1;



}
