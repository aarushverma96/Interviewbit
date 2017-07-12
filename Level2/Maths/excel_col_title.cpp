string Solution::convertToTitle(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

	string s;

	int n=A;

	while(n>=1)
	{
		int a=n%26;
		n=n/26;
		if(a==0)
		{
			a=26;
			n=n-1;
		}
		char ch=(char)(a)+64;
		s.push_back(ch);
		
		
	}

	reverse(s.begin(), s.end());

	return s;

}
