string Solution::findDigitsInBinary(int A) {
	// Do not write main() function.
	// Do not read input, instead use the arguments to the function.
	// Do not print the output, instead return values as specified
	// Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

	string s;

	if(A==0)
	{
		return "0";
	}

	while(A>=1)
	{
		if(A%2==0)
		{
			s.append("0");
		}
		else
		{
			s.append("1");
		}
		A=A/2;
	}

	reverse(s.begin(), s.end());

	return s;

}
