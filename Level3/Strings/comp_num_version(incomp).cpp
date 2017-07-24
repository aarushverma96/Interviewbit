int Solution::compareVersion(string A, string B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

	int i=0,j=0;

	while(i<A.length()||j<B.length())
	{
		long long int vnum1=0,vnum2=0;

		while(i<A.length() && A[i]!='.')
		{
			vnum1 = (A[i]-'0')+ vnum1*10;
			i++;
		}

		if(vnum1>INT_MAX)
		{
			vnum1=INT_MAX;
		}

		while(j<B.length() && B[j]!='.')
		{
			vnum2 = vnum2*10 + (B[j]-'0') ;
			j++;
		}

		if(vnum2>INT_MAX)
		{
			vnum2=INT_MAX;
		}

		if(vnum1>vnum2)
		{
			return 1;
		}
		if(vnum2>vnum1)
		{
			return -1;
		}

		vnum1=vnum2=0;
		i++;
		j++;
	}

	return 0;


}
