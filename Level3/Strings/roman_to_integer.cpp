int known(char ch)
{
	if(ch=='I')
	{
		return 1;
	}
    if(ch=='V')
	{
		return 5;
	}
	if(ch=='X')
	{
		return 10;
	}
	if (ch == 'L')
        return 50;
	if(ch=='C')
	{
		return 100;
	}
	if(ch=='D')
	{
		return 500;
	}
	if(ch=='M')
	{
		return 1000;
	}

	return -1;

}

int Solution::romanToInt(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details


    int ans=0;

	for (int i = 0; i < A.length(); ++i)
	{
		int s1=known(A[i]);

		if(i+1 < A.length())
		{
			int s2=known(A[i+1]);

			if(s1>=s2)
			{
				ans+=s1;
			}
			else
			{
				ans+=s2-s1;
				i++;
			}
		}
		else
		{
			ans+=s1;
			i++;
		}
	}

	return ans;


}
