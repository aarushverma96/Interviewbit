string Solution::longestPalindrome(string A)
{
	int low,high;
	int maxLength=1;
	int start=0;
	int len=A.length();

	for (int i = 1; i < len; ++i)
	{
		//odd length palindrome

		low=i-1;
		high=i+1;

		while(low>=0 && high < len && A[low]==A[high])
		{
			if (high - low + 1 > maxLength)
            {
                start = low;
                maxLength = high - low + 1;
            }
            --low;
            ++high;
		}


		//even length palindrome

		low=i-1;
		high=i;


		while(low>=0 && high < len && A[low]==A[high])
		{
			if (high - low + 1 > maxLength)
            {
                start = low;
                maxLength = high - low + 1;
            }
            --low;
            ++high;
		}
	}


	string ans;

	if(maxLength==1)
	{
		ans+=A[start];
	}
	else
	{
		for (int i =start; i<=start+maxLength-1; ++i)
		{
			ans += A[i];
		}
	}


	return ans;
}